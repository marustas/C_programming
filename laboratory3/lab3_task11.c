#include <stdio.h>

long Fibonacci_func(long n);

int main(void)
{
	long a;

	printf("Test Fibonacci() function\n");
	printf("Enter an integer: ");

	while (scanf("%ld", &a) == 1)
	{
		printf("Fibonacci #%ld = %ld\n", a, Fibonacci_func(a));

		printf("Enter an integer: ");
	}

	return 0;
}

long Fibonacci_func(long n)
{
	if (n < 1)
	{
		printf("Error: n must be a positive integer.\n");
		return -1;
	}

	long fib_num1 = 0, fib_num = 1, fib_num2;

	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}

	for (long i = 3; i <= n; i++)
	{
		fib_num2 = fib_num1;
		fib_num1 = fib_num;
		fib_num = fib_num1 + fib_num2;
	}

	return fib_num;
}