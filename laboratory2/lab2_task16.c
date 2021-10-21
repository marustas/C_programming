#include <stdio.h>

int main(void)
{
    const float DEIRDE_INVESTMENT = 100;
    const float DAPHNE_INVESTMENT = 100;
    const float DEIRDE_INTEREST = 0.05;
    const float DAPHNE_INTEREST = 0.1;

    int years = 0;
    float daphne_balance = DAPHNE_INVESTMENT;
    float deirdre_balance = DEIRDE_INVESTMENT;

    while (deirdre_balance <= daphne_balance)
    {
        deirdre_balance *= 1.0f + DEIRDE_INTEREST;

        daphne_balance += DAPHNE_INVESTMENT * DAPHNE_INTEREST;
        years++;
    }
    printf("The value of Deirdre’s investment will exceed the value of Daphne’s investment in %d years.\nDaphne's investment is worth $%.2f and Deirdre’s investment is worth $%.2f.\n", years, daphne_balance, deirdre_balance);

    return 0;
}