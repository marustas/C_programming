#include <stdio.h>

int squares_sum(int *lower_limit, int *upper_limit);

int main(void)
{
    int lower_limit, lower_limit_squared, upper_limit, upper_limit_squared, input;

    printf("Enter lower and upper integer limits:");

    while (input = scanf("%d,%d", &lower_limit, &upper_limit), input == 2 && lower_limit < upper_limit)
    {
        int lower_limit_squared = lower_limit * lower_limit;
        int upper_limit_squared = upper_limit * upper_limit;
        printf("The sums of the squares from %d to %d is %d\n", lower_limit_squared, upper_limit_squared, squares_sum(&lower_limit, &upper_limit));
        printf("Enter next set of limits(A letter to end program): ");
    }

    printf("Done\n");

    return 0;
}

int squares_sum(int *lower_limit, int *upper_limit)
{
    int lower_limit_squared = *lower_limit * *lower_limit;
    int upper_limit_squared = *upper_limit * *upper_limit;
    int sum = 0;

    for (int i = *lower_limit; i <= *upper_limit; i++)
    {
        sum += i * i;
    }
    return sum;
}