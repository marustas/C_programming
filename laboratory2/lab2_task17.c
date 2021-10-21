/*
Chuckie Lucky won a million dollars (after taxes), which he places in an account that earns 8% a year.
On the last day of each year, Chuckie withdraws $100,000. 
Write a program that finds out how many years it takes for Chuckie to empty his account.
*/
#include <stdio.h>
#define INITIAL_AMOUNT 1000000
#define EARN_PERCENT 0.08
#define EVERYDAY_SPEND 100000
int main(void)
{

	int years = 0;
	float balance = INITIAL_AMOUNT;

	while (balance > 0)
	{
		balance -= EVERYDAY_SPEND;
		balance *= 1.0 + EARN_PERCENT;
		years++;
	}

	printf("Chuckie's account is going to be empty in %d years\n", years);

	return 0;
}