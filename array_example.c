#include <stdio.h>

#define SIZE 8

int main(void)
{
    double double_array[SIZE];
    double cumulative_sum_array[SIZE];
    int i;

    printf("Enter %d numbers:\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        printf("value #%d: ", i + 1);
        scanf("%lf", &double_array[i]);
    }
    cumulative_sum_array[0] = double_array[0];
    for (i = 1; i < SIZE; i++)
        cumulative_sum_array[i] = cumulative_sum_array[i - 1] + double_array[i];

    for (i = 0; i < SIZE; i++)
        printf("%8g ", double_array[i]);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        printf("%8g ", cumulative_sum_array[i]);
    printf("\n");

    return 0;
}