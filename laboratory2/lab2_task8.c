/*
Write a program that requests two floating-point numbers and prints the value of their difference divided by their product.
Have the program loop through pairs of input values until the user enters nonnumeric input
*/
#include <stdio.h>

int main(void)
{
	float a, b, c;
	
	printf("Enter two floating-point numbers: ");
	
	while (scanf(" %f %f", &a, &b) == 2)
	{
		c = (a - b) / (a * b);

		printf("(%.3f - %.3f)/(%.3f * %.3f) = %.3f\n", a, b, a, b, c);
		printf("Enter two floating-point numbers (enter character to quit): ");
	}

	return 0;
}