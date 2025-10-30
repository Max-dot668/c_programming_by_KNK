/* This program asks the user to enter a value for x and then displays the value of the polynomial */
#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter a value for x: ");
	scanf("%i", &x);

	int horner = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("The value of the polynomial is %d\n", horner);

	return 0;
}

