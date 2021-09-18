#include <stdio.h>
int main()
{
    int n, sum, count = 0;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    while (count <= n)
    {
        sum += (count * count);
        count++;
    }

    printf("Sum of squares of money  %d\n", sum);
    return 0;
}