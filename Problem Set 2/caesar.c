#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include"cs50.h"
#include<stdlib.h>

int rotate(char c);

int main(int argc, string argv[])
{
    //Counting Command-Line Arguments   
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    //Checking the key
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        
        // Using the key 
        int k= atoi(argv[1]);
        string plaintext=get_string("plaintext: ");
        printf("ciphertext: ");
        
        for (int j = 0; j < strlen(plaintext); j++)
        {
            if (isupper(plaintext[j]))
            {
                printf("%c", (plaintext[j]-65+k)%26+65);
            }
            else if (islower(plaintext[j]))
            {
                printf("%c", (plaintext[j]-97+k)%26+97);
            }
            else
                printf("%c", plaintext);
        }
        
    }


    return 0;
}
