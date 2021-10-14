#include <stdio.h>

int main(void)
{
    long upper_limit = -1, lower_limit = 0;
    int reads;

    printf("This program prints a table of integers with their "
           "squares and cubes.\n");
    do
    {
        printf("Enter lower and upper limits of the table: ");
        reads = scanf("%ld%ld", &lower_limit, &upper_limit);
        if (reads != 2)
        {
            while (getchar() != '\n')
                ;
        }
    } while (lower_limit > upper_limit);
    printf("\n");

    printf(" Integer       |Squared integer| Cubed integer \n");
    printf("---------------|---------------|---------------\n");
    for (long int i = lower_limit; i <= upper_limit; i++)
    {
        printf(" %-14ld| %-14ld| %-14ld\n", i, i * i, i * i * i);
    }
    printf("\n");

    return 0;
}