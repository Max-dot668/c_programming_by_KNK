/* Computes the volume of a sphere with a 10-meter radius */
#include <stdio.h>
#define PI	3.14159265359f

int main(void)
{
	int r = 10;

	float volume = (4.0f/3.0f) * PI * (r * r * r);
	printf("Volume of a sphere with radius %d: %f\n", r, volume);
	return 0;
}
