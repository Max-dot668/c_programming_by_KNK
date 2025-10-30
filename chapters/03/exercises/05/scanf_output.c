/* Prints the values of variables x, i, and y after the scanf call */
#include <stdio.h>

int main(void)
{
	float x, y;
	int i;

	printf("Enter x, i, y values: ");
	scanf("%f%d%f", &x, &i, &y);

	printf("%f %d %f\n", x, i, y);

	return 0;
}
