#include <stdio.h>

int main(void)
{
    long upper_limit = -1, lower_limit = 0;
    int input;
    long i_squared, i_cubed;
    do
    {
        printf("Enter lower and upper limits of the table: ");
        input = scanf("%ld%ld", &lower_limit, &upper_limit);

        if (input != 2)
        {
            while (getchar() != '\n');
        }
    } while (lower_limit > upper_limit);

    printf("\n");

    printf(" Integer       |Squared integer| Cubed integer \n");
    printf("---------------|---------------|---------------\n");

    for (long int i = lower_limit; i <= upper_limit; i++)
    {
        i_squared = i * i;
        i_cubed = i * i * i;
        printf(" %-14ld| %-14ld| %-14ld\n", i, i_squared, i_cubed);
    }

    printf("\n");

    return 0;
}