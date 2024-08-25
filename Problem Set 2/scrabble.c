#include <stdio.h>
#include "cs50.h"
#include<string.h>

int get_score(string word);

// Make an array or scores
int points[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void)
{
    // Type your word
    string word1= get_string("word 1: ");
    string word2=get_string("word 2: ");
    
    
    // Score both words
    int score1=get_score(word1);
    printf ("score1: %i \n", score1);
    int score2=get_score(word2);
    printf("score2: %i \n", score2);

    // Check the winner
    if (score1 == score2)
    {
        printf("Tie! \n");
    }
    else if (score1> score2)
    {
        printf("Player 1 wins! \n");
    }
    else
        printf("Player 2 wins! \n");

    return 0;
}

int get_score(string word)
{
    int score=0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i]>65 && word[i]<90)
        {
            score= score+ points[word[i]-65];
        }
        
        else if (word[i]>97 && word[i]<122)
        {
            score=score+points[word[i]- 97];
        }
        
        return score;
    }
    
}

