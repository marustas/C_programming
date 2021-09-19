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