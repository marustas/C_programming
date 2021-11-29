#include <stdio.h>

void max_replace_func(double *x, double *y);

int main(void)
{
    double x, y;

    printf("Please enter two double variables(divided by coma): ");
    while (scanf("%lf,%lf", &x, &y) == 2)
    {
        printf("The values before the operation:\n");
        printf("x = %f, y = %f\n", x, y);

        max_replace_func(&x, &y);

        printf("After the operation and replacement:\n");
        printf("x = %f, y = %f\n", x, y);

        printf("Please enter two double variables(divided by coma)): ");
    }
    printf("Bye.\n");

    return 0;
}

void max_replace_func(double *x, double *y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;
};