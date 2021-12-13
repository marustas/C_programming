#include <stdio.h>
int main(void)
{
	char ch;
	int order;
	char *info;
	printf("Enter the characters:\n");
	while ((ch = getchar()) != '\n')
	{
		printf("%c", ch);

		if (ch >= 'a' && ch <= 'z')
			ch = (ch - 'a' + 'A');
			
		if (ch >= 'A' && ch <= 'Z')
			order = ch - 'A' + 1;
		else
			order = -1;

		if (order != -1)
			info = "is a letter";
		else
			info = "is not a letter";

		printf(" %16s: %4d \n", info, order);
	}
}