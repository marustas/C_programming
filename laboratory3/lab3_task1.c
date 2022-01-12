#include <stdio.h>

void min(double x, double y);

int main(void)
{
    double x, y;

    printf("Please enter the variables:\n");
    while (scanf("%lf,%lf", &x, &y) == 2)
    {
        if (x != y)
        {
            min(x,y);
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

void min(double x, double y)
{
  if (x > y)
        printf("The variable %lf is the smallest\n",y);
    else
        printf("The variable %lf is the smallest\n",x);
}