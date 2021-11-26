#include <stdio.h>

void print_function(char ch, int numberOfChars, int numberOfLines);

int main(void)
{
    char ch;
    int number_of_lines, number_of_characters;
    printf("Please enter a character, number of characters in a line, and number of lines:\n");

    while (scanf("%c,%d,%d", &ch, &number_of_characters, &number_of_lines) == 3)
    {
        print_function(ch, number_of_characters, number_of_lines);
        
        while (getchar() != '\n')
            continue;

        printf("Please enter a character, number of characters in a line, and number of lines:\n");
    }

    return 0;
}

void print_function(char ch, int number_of_characters, int number_of_lines)
{
    int a;
    int b;

    for (b = 1; b <= number_of_lines; b++)
    {
        for (a = 0; a < number_of_characters; a++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}