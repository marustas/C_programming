#include <stdio.h>
#include "header.h"
#define N 5
int main(void)
{
    /*
    double a = 5.5;
    double b = 4.5;
    swap(&a, &b);
    printf("After swapping: a= %g and b=%g\n ", a, b);
    */
    int dArray[N] = {5, 2, 9, 6, -5};

    for (size_t curr = 0; curr < N - 1; ++curr)
    {
        size_t minIndex = curr;
        for (size_t i = curr + 1; i < N; ++i)
        {
            if (dArray[i] < dArray[minIndex])
            {
                minIndex =i;
            }
            swap(&dArray[curr], &dArray[minIndex]);
        }
    }
    for (size_t i = 0; i < N; ++i)
    {
        printf("%d", dArray[i]);
    }
    printf("\n");
}
