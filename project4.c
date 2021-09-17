#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
    // array is a sequential data structure that stores data of the same datta type
    // the size of this data structure is fixed at creation
    int ia[10] = {5, 2, 4, 8, 3, 7};
    // space to store 10 integers
    // array indexes start at 0
    size_t array_size = sizeof(ia) / sizeof(ia[5]);
    //printf("%zu %zu\n", sizeof(ia), sizeof(ia[5]));
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%d\n", ia[i]);
    }

    //inserting value into array
    size_t insert_pos;
    do
    {
        printf("Enter the position where to insert: ");
        scanf("%zu", &insert_pos);
    } while (!(insert_pos >= 0 && insert_pos <= 8));
    --insert_pos; // decrease variable by 1
    for (size_t i = array_size - 2; i >= insert_pos; --i)
    {
        ia[i + 1] = ia[i];
    }
    for (size_t i = 0; i < array_size; ++i)
    {
        printf("%d\n", ia[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &ia[insert_pos]);
    printf("The array after the insertion:\n");
    for (size_t i = 0; i < array_size; ++i)
    {
        printf("%d\n", ia[i]);
    }
}