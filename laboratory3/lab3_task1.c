#include <stdio.h>

double min(double, double);

int main(void)
{
    double x, y;

    printf("Please enter the variables:\n");
    while (scanf("%lf,%lf", &x, &y) == 2)
    {
        if (x != y)
        {
            printf("The minimum of %lf and %lf is %lf.\n", x, y, min(x, y));
            printf("Please enter the variables:\n");
        }
        else
        {
            printf("The variables are equal, please try different values.\n");
            printf("Please enter the variables:\n");
        }
    }
    printf("Bye.\n");

    return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}