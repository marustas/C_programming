#include <stdio.h>

void sort_variables(double *x, double *y, double *z);

int main(void)
{
	double x, y, z;

	printf("Enter three double variables(x, y and z):\n");
	while (scanf("%lf,%lf,%lf", &x, &y, &z) == 3)
	{
		if (x != y && y != z && x != z)
		{
			putchar('\n');
			printf("The positions of the variables before operation:\n");
			printf("x = %f, y = %f, z = %f\n", x, y, z);

			sort_variables(&x, &y, &z);

			putchar('\n');
			printf("The positions of the variables after the operation:\n");
			printf("x = %f, y = %f, z = %f\n", x, y, z);

			putchar('\n');

			printf("Enter three double variables(x, y and z):\n");
		}
		else
		{
			printf("Some of the variables are equal, please try again.\n");
			printf("Enter three double variables(x, y and z):\n");
		}
	}

	return 0;
}

void sort_variables(double *x, double *y, double *z)
{
	double tmp;

	if (*x > *y)
	{
		tmp = *y;
		*y = *x;
		*x = tmp;
	}

	if (*y > *z)
	{
		tmp = *z;
		*z = *y;
		*y = tmp;

		if (*x > *y)
		{
			tmp = *y;
			*y = *x;
			*x = tmp;
		}
	}
}