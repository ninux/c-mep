#include <stdio.h>
#include "count.h"

extern int end;

int main(char argc, char** argv)
{
	int i;

	i = 0;

	printf("static int\tauto int\n");
	for (i = 0; i < 10; i++) {
		increment();
	}

	printf("The default start value is %i\n", DEFAULT_START_VALUE);
	/* printf("The start value is %i\n", start);  <- won't compile! */
	printf("The end value is %i\n", end);

	return 0;
}
