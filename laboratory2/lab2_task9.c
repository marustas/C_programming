/*
Modify exercise 8 so that it uses a function to return the value of the calculation.
*/
#include <stdio.h>

float calc(float x, float y);

int main(void)
{
    float a, b;
    int reads;

    printf("Enter two floating-point numbers:\n ");
    while (scanf(" %f %f", &a, &b) == 2)
    {
        printf("(%.3f - %.3f)/(%.3f * %.3f) = %.3f\n", a, b, a, b, calc(a, b));
        printf("Enter two floating-point numbers (enter character to quit): ");
    }

    return 0;
}

float calc(float x, float y)
{
    return (x - y) / (x * y);
}
