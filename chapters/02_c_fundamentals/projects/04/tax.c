/* Prompts the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added */
#include <stdio.h>
#define TAX	0.05

int main(void)
{
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);

	float total = amount + (amount * TAX);
	printf("With tax added: $%.2f\n", total);

	return 0;
}
