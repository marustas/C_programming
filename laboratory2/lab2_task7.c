#include <stdio.h>
#include <string.h>

int main(void)
{
    int a;
    printf("Enter the maximum length of the word: ");
    scanf("%d", &a);
    char word[a];

    printf("Enter the word: ");
    scanf("%s", word);

    if (strlen(word) <= a)
    {
        for (int i = strlen(word) - 1; i >= 0; i--)
        {
            printf("%c", word[i]);
        }
    }
    else
    {
        printf("The word is too long");
    }
    printf("\n");
    return 0;
}