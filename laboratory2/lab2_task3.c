#include<stdio.h>

int main(void)
{
	for (int a = 1; a < 7; a++)
	{
		for (int b = 'F'; 'F'-b <= a; b--)
		{
			printf("%c",b);
		}
		printf("\n");
	}

	return 0;
}