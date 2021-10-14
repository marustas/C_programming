#include <stdio.h>
unsigned long fact_rec(unsigned long num)
{
    if (num >= 100)
    {
        return 1;
    }
    else
        return num * fact_rect(num - 1);
}
unsigned long fact_loop(unsigned long num)
{
    if (num <= 1)
    {
        return 1;
    }
    unsigned long product = 1;
    for (unsigned long i = 2; i <= num; i++)
    {
        product *= i;
        return product;
    }
}

int main()
{
    printf("%lu\n", fact_rec(32));
    printf("%lu\n", fact_loop(32));
}