#include <stdio.h>
#include "cs50.h"

int main (void)
{
    int money=0;
    do
    {
        money= get_int("Changed owned: ");
    } while (money<1);
    
    int quarters=0, dimes=0, nickels=0, pennies=0,count=0;
    // Check quarters
        if (money>=25)
        {
            quarters+= money/25;
            money= money- quarters*25;
        }
    // Check dimes
        if (money<25 && money>=10)
        {
            dimes=money/10;
            money=money-dimes*10;
        }
    // Check nickels    
        if (money<10 && money>=5)
        {
            nickels=money/5;
            money=money-nickels*5;
        }
    //Check pennies        
        if (money<5 && money>=1);
        {
            pennies=money;
        }
    //Count 
    count= quarters+dimes+nickels+pennies;
    printf("Totals: %i \n", count);
    printf("Quarters: %i \n", quarters);
    printf("Dimes: %i \n", dimes);
    printf("Nickels: %i \n", nickels);
    printf("Pennies: %i \n", pennies);
}