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
            d = a - MIN;
        }
        else
        {
            d = a;
        }
        printf("%d minutes are %d hours and %d miutes\n", a, c, d);
    } while (a > 0);
}