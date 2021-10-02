/*
Write a program that converts time in minutes to time in hours and minutes.
Use #define or const to create a symbolic constant for 60.
Use a while loop to allow the user to enter values repeatedly and terminate the loop if a value for the time of 0 or less is entered.
*/
#include <stdio.h>
#define MIN 60

int main(void)
{
    int inputMinutes, outputHours, outputMinutes;

    printf("Enter the amout of minutes: ");
    scanf("%d", &inputMinutes);

    while (inputMinutes > 0)
    {
        if (inputMinutes >= 60)
        {
            outputHours = inputMinutes / MIN;
            outputMinutes = inputMinutes % MIN;
            printf("%d minutes is %d hours and %d minutes.\n", inputMinutes, outputHours, outputMinutes);

        }
        else
        {
            outputMinutes = inputMinutes;
            printf("%d minutes is 0 hours and %d minutes.\n", inputMinutes, outputMinutes);
        }
        printf("Enter the amout of minutes: ");
        scanf("%d", &inputMinutes);
    }

    return 0;
}