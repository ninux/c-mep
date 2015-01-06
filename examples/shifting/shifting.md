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

	for (pos = n; pos >= 0; pos--) {
		bits[pos] = (value & 1)+'0';
		value = value >> 1;
	}

	bits[n+1] = '\0';

	printf("%i d = ", orig);

	i = 0;
	while (bits[i] == '0') {
		i++;
	}

	if (bits[i] == '\0') {
		printf("0");
	} else {
		while (i <= n) {
			putchar(bits[i]);
			i++;
		}
	}

	printf(" b\n");

	free(bits);

	return 0;
}
```

### Command-line
```
[user@machine coding]$ ./main.o
no parameter given!
[user@machine coding]$ ./main.o 1
1 d = 1 b
[user@machine coding]$ ./main.o 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
0 d = 0 b
1 d = 1 b
2 d = 10 b
3 d = 11 b
4 d = 100 b
5 d = 101 b
6 d = 110 b
7 d = 111 b
8 d = 1000 b
9 d = 1001 b
10 d = 1010 b
11 d = 1011 b
12 d = 1100 b
13 d = 1101 b
14 d = 1110 b
15 d = 1111 b
```
