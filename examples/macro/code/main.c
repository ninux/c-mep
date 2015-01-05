#include <stdio.h>
#include "debug.h"
#include "compare.h"

int main(char argc, char** argv)
{
	_dbginfo();
	int a, b, c = 0;

	a = 5;
	b = 7;
	c = getmax(a, b);

	printf("a = %i\nb = %i\nc = %i\n", a, b, c);

	_dbgmsg("did it work?");

	return 0;
}
