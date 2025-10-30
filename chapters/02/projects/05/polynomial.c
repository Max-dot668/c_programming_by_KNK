/* This program asks the user to enter a value for x and then displays the value of the polynomial */
#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter a value for x: ");
	scanf("%i", &x);

	int polynomial = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
	printf("The value of the polynomial is %d\n", polynomial);

	return 0;
}
