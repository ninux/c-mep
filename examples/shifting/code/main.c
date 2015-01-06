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
