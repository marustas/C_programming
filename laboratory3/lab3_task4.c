#include <stdio.h>

double harmonic_mean_func(double, double);

int main(void)
{
    double a, b;

    printf("Enter two double variables:\n");
    while (scanf("%lf,%lf", &a, &b) == 2)
    {
        printf("%f\n", harmonic_mean_func(a, b));

        printf("Enter two double variables:\n");
    }
   printf("Bye.\n");
    return 0;
}

double harmonic_mean_func(double a, double b)
{
    return 2 / (1 / a + 1 / b);
}