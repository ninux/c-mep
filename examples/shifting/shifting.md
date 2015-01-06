# Bitshifting
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "bitop.h"

int main(char argc, char** argv)
{
	int i, n;

	if (argc <= 1) {
		printf("no parameter given!\n");
		return -1;
	}

	for (i = 1; i < argc; i++) {
		print_bits(atoi(argv[i]));
	}

	return 0;
}

```

#### bitop.h
```c
#ifndef BITOP_H
#define BITOP_H

typedef int boolean;
#define true 1
#define false 0

int print_bits(int value);

#endif /* BITOP_H */

```

#### bitop.c
```c
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
```

### Command-line
