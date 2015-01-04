#include <stdio.h>

int main(char argc, char** argv)
{
	unsigned int a = 3, b = 5, c = 7;
	unsigned int x, y, z;

	x = a == 3;
	y = (a << 1) & b;
	z = (a > 3) ? b : c;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}
