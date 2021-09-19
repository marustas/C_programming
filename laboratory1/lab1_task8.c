
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