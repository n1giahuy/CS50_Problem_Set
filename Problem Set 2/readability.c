#include<stdio.h>
#include<string.h>
#include"cs50.h"
#include<math.h>
#include<ctype.h>

int main( void)
{
    int Letter=0;
    int Sentence=0;
    int words=1;
    string w=get_string("Type: ");

    for (int i = 0; i < strlen(w) ; i++)
    {
        if (isalpha(w[i]) )
        {
            Letter ++;
        }
         
        if (w[i]=='!' || w[i]=='.'|| w[i]=='?')
        {
            Sentence++;
        }
        if (w[i] ==' ')
        {
            words++;
        }
           
    }
    
    
    float L=(float)Letter/ (float) words*100;
    float S=(float)Sentence/ (float) words*100;

    int index=round(0.0588 * L - 0.296 * S - 15.8);

    printf("Letter: %i \n", Letter);
    printf("Sentence: %i \n", Sentence);
    printf("Words:  %i\n",words);
    if (index<1)
    {
        printf("Before Grade 1\n");
    }
    else if (index>16)
    {
        printf("Grade: 16+\n");
    }
    else
        printf("Grade: %i\n", index);
    
    return 0;
}
