/* Prints the values of variables i, x, and j after the scanf call */
#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	printf("Enter i, x, j values: ");
	scanf("%d%f%d", &i, &x, &j);

	printf("%d%f%d\n", i, x, j);

	return 0;
}
