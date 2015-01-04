#include <stdio.h>

int main(char argv, char** argc)
{
	unsigned long a = 10;
	unsigned char b = -1;


	printf("a = %u\n", a);
	printf("b = %u\n", b);

	a = a + b;

	printf("a + b = %u\n", a);

	return 0;
}
