#include <stdio.h>

int main(char argc, char** argv)
{
	int a, b;
	int* a_ptr;
	int* b_ptr;

	a = 5;
	b = 2;

	a_ptr = &a;
	b_ptr = &b;

	printf("int a = 5;\n"
	       "> \"a\" is an int variable\n"
	       "> \"a\" contains the value %i\n\n", a);
	printf("int* a_ptr = &a;\n"
	       "> \"a_ptr\" is a pointer to an int\n"
	       "> \"a_ptr\" contains the address of \"a\" = %p\n\n", a_ptr);

	printf("int b = 2;\nint* b_ptr = &b\n\n");

	printf("a + b = %i + %i = %i\n\n", a, b, a+b);

	printf("*a_ptr + *b_ptr = %i + %i = %i\n\n",
	       *a_ptr, *b_ptr, *a_ptr + *b_ptr);

	return 0;
}
