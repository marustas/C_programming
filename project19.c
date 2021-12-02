#include <stdio.h>
#include <stdlib.h>

struct transaction
{
    double amount;
    int day, month, year;
};

void printTransaction1(const struct transaction tx)
{
    printf("%02d/%02d/%4d: %10.2f\n", tx.day, tx.month, tx.year, tx.amount);
}

void printTransaction2(const struct transaction *ptr)
{
    if (ptr == NULL)
    {
        printf("Invalid transaction.\n");
    }
    else
    {
        printf("%02d/%02d/%4d: %10.2f\n", ptr->day, ptr->month, ptr->year, ptr->amount);
    }
}

void addTax(struct transaction *ptr, double rate)
{
    double tax = ptr->amount * rate;
    ptr->amount += tax;
};

int main()
{
    struct transaction trans1;
    struct transaction trans2 = {100.56, 2, 12, 2021};

    printTransaction1(trans2);
    printTransaction2(&trans2);

    struct transaction *tp = NULL;

    printTransaction2(tp);
    addTax(&trans2, 0.1);
    printTransaction2(&trans2);

    printf("Size of transaction: %zu\n", sizeof(struct transaction));
    printf("Sum of field sizes for struct transaction: %zu\n",
           sizeof(trans2.amount) + sizeof(trans2.day) + sizeof(trans2.month) + sizeof(trans2.year));

    struct transaction *withdrawal = malloc(sizeof(struct transaction));

    withdrawal->amount = 100.00;
    withdrawal->day = 1;
    withdrawal->month = 12;
    withdrawal->year = 2021;

    printTransaction2(withdrawal);
}