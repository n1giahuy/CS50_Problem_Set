#include "cs50.h"
#include  <stdio.h>

int main(void)
{
    int h;
    do
    {
        h=get_int("height ? ");
    } while (h<1);
    
    

    // Loop to print each row of the pyramid
    for (int i = 0; i <h; i++)
    {

        // Print spaces to align the left side of the pyramid
        for (int m = 1; m <h-i; m++)
        {
            printf(" ");
        }

        // Print the left side of the pyramid
        for (int n= 0; n <=i; n++)
        {
            printf("#");
        }

        // Print the gap between the two sides of the pyramid
        printf("  ");

        // Print the right side of the pyramid
        for (int k =0; k<= i; k++)
        {
            printf("#");
        }
        
        
        // Move to the next line after printing a row
        printf("\n");
    }

    
    
}

