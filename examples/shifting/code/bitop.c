#include <stdio.h>
#include <stdlib.h>
#include "bitop.h"

int print_bits(int value)
{
	int b, n, i, pos, orig;
	char* bits;

	orig = value;
	n = (sizeof(int)*8);

	bits = (char*)calloc((n+1), sizeof(char));
	if (bits == NULL) {
		return -1;
	}

	for (pos = n; pos >=0; pos--) {
		bits[pos] = (value & 1)+'0';
		value = value >> 1;
	}

	bits[n+1] = '\0';

	printf("%i d = ", orig);

	i = 0;
	while (bits[i] == '0') {
		i++;
	}

	while (i <= n) {
		putchar(bits[i]);
		i++;
	}

	printf(" b\n");

	free(bits);

	return 0;
}
