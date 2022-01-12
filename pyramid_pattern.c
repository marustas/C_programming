#include <stdio.h>

int main(void)
{
    char ch;
    int rows;
    printf("Enter the character you want to print: ");
    scanf("%c", &ch);
    printf("Enter the number of rows you want to have: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
          for (int spaces = i; spaces < rows; spaces++)
        {
            printf(" ");
        }
        for (int x = 0; x <= i; x++)
        {
            printf("%c", ch);
        }

        for (int j = 0; j < i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}