#include <stdio.h>
#define INITIAL_AMOUNT 1000000
#define EARN_PERCENT 0.08
#define EVERYDAY_SPEND 100000
int main(void){


	int years = 0;
	float balance = INITIAL_AMOUNT;

	while (balance > 0)
	{
		balance -= EVERYDAY_SPEND;
		balance *= 1.0f + EARN_PERCENT;
		years++;
	}

	printf("Chuckie's account is going to be empty in %d years\n" ,years);
		   

	return 0;
}