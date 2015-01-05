#include <stdio.h>
#include <stdarg.h>
#include "stat.h"

float mean(int elements, ...)
{
	/* define pointer to the argument list */
	va_list arglist;

	float sum;
	int i;

	sum = 0.0f;
	i = 0;

	/* init list for number of elements */
	va_start(arglist, elements);

	for (i = 0; i < elements; i++) {
		/* sum up with the next argument out of the argument list
		 * read the argument as an integer value */
		sum += va_arg(arglist, int);
	}

	/* clean the memory for the defined argument list */
	va_end(arglist);

	return sum/elements;
}
