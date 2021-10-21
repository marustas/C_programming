#include <stdio.h>
#include <ctype.h>
#include "readline.h"

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()))
        ; // no body of the loop or we can use {} instead
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
            str[i++] = ch;
            ch = getchar();
    }
     str[i]= '\0';
     return i;
}