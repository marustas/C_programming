/*
Write a program that requests lower and upper integer limits, calculates the sum of all the integer squares from the square of the lower limit to the square of the upper limit, and displays the answer. 
The program should then continue to prompt for limits and display answers until the user enters an upper limit that is equal to or less than the lower limit
*/
#include <stdio.h>

int squares_sum(int lower_limit, int upper_limit);

int main(void)
{
    int lower_limit, lower_limit_squared, upper_limit, upper_limit_squared, input;

    printf("Enter lower and upper integer limits:");

    while (input = scanf("%d%d", &lower_limit, &upper_limit), input == 2 && lower_limit < upper_limit)
    {
        lower_limit_squared = lower_limit * lower_limit;
        upper_limit_squared = upper_limit * upper_limit;

        printf("The sums of the squares from %d to %d is %d\n", lower_limit_squared, upper_limit_squared, squares_sum(lower_limit, upper_limit));

        printf("Enter next set of limits: ");
    }

    printf("Done\n");

    return 0;
}

int squares_sum(int lower_limit, int upper_limit)
{
    int sum = 0;

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        sum += i * i;
    }

    return sum;
}