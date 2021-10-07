#include <stdio.h>

int main(void)
{
    /*float a, b, c;
    printf("Enter the number: ");
    scanf("%f", &a);
    printf("Enter the number: ");
    scanf("%f", &b);
    printf("Enter the number: ");
    scanf("%f", &c);
    if (a > b && a > c)
        printf("%f is the largest.\n", a);
    else if (b > a && b > c)
        printf("%f is the largest.\n", b);
    else if (c > a && c > b)
        printf("%f is the largest.\n", c);
    else if (a == 0 && b == 0 && c == 0)
        printf("The values are all 0 and impossible to compare\n");
    else
        printf("Values are not unique\n");

    return 0;
    */
    int i,j;
    for (int i=5,j=i-1; i>0,j>0; --i,j=i-1){
        printf("%d",i);
    }
}
