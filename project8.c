#include <stdio.h>
#include <stdlib.h> // utility library
#include <time.h>
int main(void)
{
    /* printf("RAND_MAX: %u\n", RAND_MAX);
    srand(time(0)); //intial value for the random number generating function
    for (size_t i = 0; i < 10; ++i)
    {
        printf("%6d\n", rand());
    };
    printf("----\n");
    printf("%ld\n", time(0));*/
    // produce ramdom numbers [1,6]
    unsigned ntries = 60000;
    unsigned nthrows[7] = {0};
    for (size_t i = 0; i < ntries; ++i)
    {
        unsigned dice = rand() % 6 + 1;
        //printf("%6d\n", dice);
        ++nthrows[dice];
    }
    for (size_t i = 0; i < 7; ++i){
printf("%zu: %7u\n", i, nthrows[i]);
    }
}