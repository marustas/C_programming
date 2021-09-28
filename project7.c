#include <stdio.h>

int main(void)
{
    int category = 0;
    if (category = 0)
    {
        printf("Category is zero\n");
    }
    int year = 2000;
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year of %d is a leap year.\n", year);
    } else{
       printf("The year of %d is not a leap year.\n", year); 
    }
}