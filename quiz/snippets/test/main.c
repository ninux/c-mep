#include <stdio.h>

int main(char argv, char** argc)
{
	//byte a;
	char b;
	short c;
	int d;
	long e;
	float f;
	double g;

	//a = sizeof(a);
	b = sizeof(b);
	c = sizeof(c);
	d = sizeof(d);
	e = sizeof(e);
	f = sizeof(f);
	g = sizeof(g);


	//printf("byte = %i\n", a);
	printf("char\t= %i\n", b);
	printf("short\t= %i\n", c);
	printf("int\t= %i\n", d);
	printf("long\t= %i\n", e);
	printf("float\t= %i\n", f);
	printf("double\t= %i\n", g);

	return 0;
}
