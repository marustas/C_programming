#include <stdio.h>
#define DUNBAR_NUMBER 150

int main(void)
{
    int friends_amount = 5;
    int week = 0;

    printf("Week | Friends\n");
    printf("-----+--------\n");

    while (friends_amount < DUNBAR_NUMBER)
    {
        printf("%4d | %7d\n", week, friends_amount);
        week++;
        friends_amount -= week;
        friends_amount *= 2;
    }

    return 0;
}