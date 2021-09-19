//Write a program that asks the user to enter the number of days and then converts that value to weeks and days.
 //For example, it would convert 18 days to 2 weeks, 4 days. 
//Use a while loop to allow the user to repeatedly enter day values; terminate the loop when the user enters a nonpositive value, such as 0 or -20.
#include <stdio.h>

int main(void)
{
    int a;
    int c;
    int d;
    do
    {
        printf("Enter the number of days: ");
        scanf("%d", &a);
        c = a / 7;
        if (a >= 7)
        {
            d = a - 7 * c;
        }
        else
        {
            d = a;
        }

        printf("%d days are %d weeks and %d days\n", a, c, d);
    } while (a > 0);
}