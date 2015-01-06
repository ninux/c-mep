#include <stdio.h>

int main(char argc, char** argv)
{
	void* ptr;
	int a, b;

	a = 5;
	b = 2;

	ptr = (int*)&a;

	printf("a + b = %i + %i = %i\n", a, b, a+b);
	printf("*ptr + b = %i + %i = %i\n", *(int*)ptr, b, *((int*)ptr)+b);

	return 0;
}
