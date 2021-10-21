/*
Use nested loops to produce the following pattern:

^
^^
^^^
^^^^
^^^^^
*/
#include <stdio.h>

int main(void)
{
	for (int a = 1; a < 6; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("^");
		}
		printf("\n");
	}

	return 0;
}