#include <stdio.h>

void print_spaces(unsigned int n);

int main(void)
{
    char uppercase_letter;
    char a, b;

    do
    {
        printf("Enter an uppercase letter: ");
        scanf(" %c", &uppercase_letter);
    } while (uppercase_letter < 'A' || 'Z' < uppercase_letter);

    for (a = 'A'; a <= uppercase_letter; a++)
    {

        print_spaces(uppercase_letter - a);

        for (b = 'A'; b < a; b++)
        {
            printf("%c", b);
        }

        for (; 'A' <= b; b--)
        {
            printf("%c", b);
        }

        print_spaces(uppercase_letter - a);
        printf("\n");
    }

    return 0;
}

void print_spaces(unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}