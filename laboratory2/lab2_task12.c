/*
Consider these two infinite series:

1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

Write a program that evaluates running totals of these two series up to some limit of number of terms. 
*/
#include <stdio.h>

int main(void)
{
    long int series_limit;
    float sign = 1.0f;
    float infinite_series1 = 0, infinite_series2 = 0;

    printf("Enter a number of terms to sum: ");
    scanf("%ld", &series_limit);

    for (long int i = 1; i <= series_limit; i++)
    {
        infinite_series1 += 1.0f / i;
        infinite_series2 += (1.0f / i) * sign;
        sign = -sign;
    }

    printf("The %ldth partial sum for series 1 is: %.5f\n", series_limit, infinite_series1);
    printf("The %ldth partial sum for series 2 is: %.5f\n", series_limit, infinite_series2);

    return 0;
}