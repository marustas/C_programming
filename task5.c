#include <stdio.h>
int main(void)
{
    int count, sum, n;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    count = 0;
    sum = 0;
    while (count++ < n)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}