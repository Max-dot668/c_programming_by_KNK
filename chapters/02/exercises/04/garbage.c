/* prints int and float values from uninitialized variables */
#include <stdio.h>

int main(void)
{
	int garbage_int;
	float garbage_float;

	printf("Garbage int: %d\n", garbage_int);
	printf("Garbage float: %f\n", garbage_float);

	return 0;
}
