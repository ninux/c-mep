#include <stdio.h>
#include "calc.h"

int (*add_function)(int, int) = NULL;
int (*sub_function)(int, int) = NULL;

int subtract(int a, int b, int (*sub_function)(int, int));

int main(char argc, char** argv)
{
	int a, b, c, d, e= 0;

	add_function = &add;

	a = 5;
	b = 2;
	c = add_function(a, b);
	d = (*add_function)(a, b);

	printf("%i + %i = %i\n", a, b, c);
	printf("%i + %i = %i\n", a, b, d);

	e = subtract(a, b, &sub);

	printf("%i - %i = %i\n", a, b, e);

	return 0;
}

int subtract(int a, int b, int (*sub_function)(int, int))
{
	return sub_function(a, b);
}
