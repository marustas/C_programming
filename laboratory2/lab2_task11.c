/*
Write a program that reads eight integers into an array and then prints them in reverse order.
*/
#include <stdio.h>
# define SIZE 8

int main(void)
{
	int int_array[SIZE];
	int i; 

	printf("Enter 8 integers:\n");

	for (i = 0; i < SIZE; i++) 
	{
		scanf("%d", &int_array[i]);
	}

	for (i=SIZE-1; i >=0; i--) 
	{
		printf("%d ", int_array[i]);
	}
	
	printf("\n");

	return 0;
}