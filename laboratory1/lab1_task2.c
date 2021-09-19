#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter your variable: ");
    scanf("%d", &a);
    b = a + 10;
    for (a; a <= b; ++a)
    {
        printf("%d\n", a);
    }
}