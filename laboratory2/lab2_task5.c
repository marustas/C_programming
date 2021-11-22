/*
Have a program request the user to enter an uppercase letter.
Use nested loops to produce a pyramid pattern like this:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

The pattern should extend to the character entered. 
For example, the preceding pattern would result from an input value of E.
*/
#include <stdio.h>

int main(void)
{
	char uppercase_letter;
	char row;
	char spaces;
	char letter;

	printf("Please, insert an uppercase letter: ");
	scanf("%c", &uppercase_letter);

	for (row = 'A'; row <= uppercase_letter; row++)
	{
		for (spaces = uppercase_letter; spaces > row; spaces--)
		{
			printf(" ");
		}
		for (letter = 'A'; letter < row; letter++)
		{
			printf("%c", letter);
		}
		for (; letter >= 'A'; letter--)
		{
			printf("%c", letter);
		}
		printf("\n");
	}
	return 0;
}