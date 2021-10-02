/*
Write a program that displays the results of applying the modulus operation.
 The user should first enter an integer to be used as the second operand, which will then remain unchanged. 
 Then the user enters the numbers for which the modulus will be computed, terminating the process by entering 0 or less.
*/
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &b);
    printf("Now enter the first operand: ");
    scanf("%d", &a);
    while (a > 0)
    {
        c = a % b;
        printf("%d %% %d is %d\n", a, b, c);

        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &a);
    }
    printf("Done");
    return 0;
}