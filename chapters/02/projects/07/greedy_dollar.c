/* This program asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills */
#include <stdio.h>

int main(void)
{
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	int twenties = amount / 20;
	printf("$20 bills: %d\n", twenties);
	amount = amount - (20 * twenties);

	int tens = amount / 10;
	printf("$10 bills: %d\n", tens);
	amount = amount - (10 * tens);

	int fives = amount / 5;
	printf("$5 bills: %d\n", fives);
	amount = amount - (5 * fives);

	int ones = amount / 1;
	printf("$1 bills: %d\n", ones);
	amount = amount - (1 * ones);

	return 0;
}
