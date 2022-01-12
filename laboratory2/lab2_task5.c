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
    char ch, asc, desc;
    int rows, spaces;
    printf("Enter the letter: ");
    scanf("%c", &ch);
    for (rows = 'A'; rows <= ch; rows++)
    {
        for (spaces = ch; spaces > rows; spaces--)
        {
            printf(" ");
        }
        for (asc = 'A'; asc < rows; asc++)
        {
            printf("%c", asc);
        }
        for (desc = asc; desc >= 'A'; desc--)
        {
            printf("%c", desc);
        }
        printf("\n");
    }

    return 0;
}