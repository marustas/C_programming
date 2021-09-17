#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    // the loop printing character
    for (int i = 0; i <= 255; ++i)
    {
        printf("%0*d\t%c\n", 3, i, i); //* is a placeholder for formatting parametres
    }
    //1) init
    //2) condition checking(i<= something)
    //3) useful work(in this case printing) on line 9
    //4) counter(in this case increment)
    //5) repeating all of the above steps until condition is true

    // data types:
    // boolean or logical (true (not 0) /false (0) )
    bool a = true;

    // integer(numbers)
    // short int <= int <= long int <= long long int(increasing intervals of potentials values)
    int b = 3;

    // char(character)
    char c = "a";

    // "real" numbers:
    // double,long double, float
    double d = 4.5;

    printf("datasizes in bytes:\nchar: %zu\nshort int: %zu\nint :%zu\nlong int: %zu\nlong long int:  %zu\n"
           "float: %zu\ndouble: %zu\nlong double : %zu\n",
           sizeof(char), sizeof(int), sizeof(short), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));
    int number = 1;
    while (1)
    {
        printf("%d\n", number);
        if (number > 5)
        {
            break;
        }
        ++number;
    }
    printf("%d\n", number++);
    printf("%d\n", number);
}
