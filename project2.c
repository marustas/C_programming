#include <stdio.h>

// () parenthesis
// {} braces (curly brackets) - used for code blocks
// [] brackets (square brackets)
// <> angle brackets

// produce a table of simple temperatures in Celsius and Farenheit
// F = 9/5 * C + 32
//print a table of temperature 0 - 100 C and F equivalents

int main(void)
{
    // repetition of looping : while(whent we don't know # in advance) for(# is known in advance)
    for (int i = 0; i <= 100; i += 5)
    {
        double fahr = 9.0 / 5 * i + 32;
        printf("|%3d|\t|%5.1f|\n", i, fahr);
    }
    printf("-----\n");
    printf("%d\n", 9 / 5); // integer division : 9 / 5 = 1.8 -> 1
    // i= i + 5 assingement
    // i+=5
    for (int f = 0; f <= 200; f += 10)
    {
        int C = (f - 32.0) * 5.0 / 9;
        printf("%3d\t%5.1f\n", C, f);
    }
}
