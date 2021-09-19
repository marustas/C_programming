//Write a program that displays the results of applying the modulus operation.
// The user should first enter an integer to be used as the second operand, which will then remain unchanged.
// Then the user enters the numbers for which the modulus will be computed, terminating the process by entering 0 or less.
#include <stdio.h>
int main(void)
{
    int a, b, output;
    printf("Please enter an integer to serve as the second operand: ");
    scanf("%d", &b);
    do
    {

        printf("Now enter the first operand: ");
        scanf("%d", &a);
        output = a % b;
        printf("Remainder of %d and %d is = %d\n", a, b, output);
    } while (a > 0);

    return 0;
}