/*
Use nested loops to produce the following pattern:

A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
#include <stdio.h>

int main(void)
{
	char c = 'A';

	for (int a = 1; a < 7; a++)
	{
		for(int b = 1; b <= a; b++)
		{
			printf("%c", c++); 
		}
		printf("\n");
	}

	return 0;
}