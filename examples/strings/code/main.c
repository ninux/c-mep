#include <stdio.h>
#include "string.h"

int main(char argc, char** argv)
{
	int i;

	if (argc <= 1) {
		printf("no parameter given!\n");
	}

	for (i = 1; i < argc; i++) {
		print_string(argv[i]);
		printf(" ");
	}

	printf("\n");

	return 0;
}
