#include <stdio.h>
#include "count.h"

static int start = DEFAULT_START_VALUE;
int end = DEFAULT_END_VALUE;

void increment(void)
{
	static int ctr1 = 10;
	int ctr2 = start;

	ctr1++;
	ctr2++;

	printf("c1 = %i\t\tc2 = %i\n", ctr1, ctr2);
}
