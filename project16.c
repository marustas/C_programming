#include <stdio.h>

int main(void)
{
    int age, weight;
    if (age > 18 && age < 55 && weight >= 45)
    {
        printf("The donor is acceptable.\n");
    }
    else
    {
        printf("The donor is unacceptable.\n");
    }
}
