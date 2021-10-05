#include <stdio.h>

int main(void)
{
    int ia[10] = {1, 2, 3, 4, 5, -6, -7, -8, -9, -10};
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        if (ia[i] <= 0)
            continue;
        total += ia[i];
        if(ia[i]==6) goto label1;
    }
    label1:
    printf("The total of postive integers is %d\n", total);
}