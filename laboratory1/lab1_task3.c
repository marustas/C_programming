/*Write a program that asks the user to enter the number of days and then converts that value to weeks and days.
For example, it would convert 18 days to 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the loop when the user enters a nonpositive value, such as 0 or -20.
*/
#include <stdio.h>
#define WEEK_SCALE 7
int main(void)
{
    int inputDays;
    int outputDays;
    int outputWeeks;
    printf("Enter the number of days: ");
    scanf("%d", &inputDays);
    while (inputDays > 0)
    {
        outputWeeks = inputDays % WEEK_SCALE;
        outputDays = inputDays / WEEK_SCALE;
        printf("%d days are %d weeks, %d days.\n", inputDays, outputDays, outputWeeks);

        printf("Enter a number of days (enter <=0 to quit): ");
        scanf("%d", &inputDays);
    }
    return 0;
}