//Write a program that converts time in minutes to time in hours and minutes.
//Use #define or const to create a symbolic constant for 60. Use a while loop to allow the user to enter values repeatedly and terminate the loop if a value for the time of 0 or less is entered.
#include <stdio.h>
#define MIN 60

int main(void)
{
    int a;
    int c;
    int d;
    do
    {
        printf("Enter the number of minutes: ");
        scanf("%d", &a);
        c = a / MIN;
        if (a > 60)
        {
            d = a - MIN*c;
        }
        else
        {
            d = a;
        }
        printf("%d minutes are %d hours and %d miutes\n", a, c, d);
    } while (a > 0);
}