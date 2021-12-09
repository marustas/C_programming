#include <stdio.h>
#include <stdlib.h>

int *alllocateArray(int size, int intitValue)
{
    int *arr = malloc(sizeof(int) * size);

    if (arr)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = intitValue;
        }
    }
    return arr;
}

void allocateArrayAtExistingPointer(int **ptr, int size, int initValue)
{
    *ptr = malloc(sizeof(int) * size);
    if (ptr)
    {
        for (int i = 0; i < size; i++)
        {
            *(*ptr+1) =initValue;
        }
    }
}

int main(void)
{
    int size = 10;
    int *iarr = malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        iarr[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", iarr[i]);
    }
    printf("\n");
    free(iarr);

    int *ourIntArray = alllocateArray(5, 42);

    for (int i = 0; i < size; i++)
    {
        printf("%d", ourIntArray[i]);
    }
    printf("\n");
    free(ourIntArray);

    int *testPtr = NULL;
    allocateArrayAtExistingPointer(testPtr, 5, 42);
    free(testPtr);
}