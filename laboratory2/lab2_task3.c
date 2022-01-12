/*
Use nested loops to produce the following pattern:

F
FE
FED
FEDC
FEDCB
FEDCBA
*/
#include <stdio.h>

int main(void)
{
	char ch;
	printf("Enter the uppercase letter:");
	scanf("%c", &ch);
	for (int i = ch; i >= 'A'; i--)
	{
		for (char j = ch; j >= i; j--)
		{
			printf("%c", j);
		}

		printf("\n");
	}
}