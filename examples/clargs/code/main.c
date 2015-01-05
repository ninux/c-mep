#include <stdio.h>

int main(char argc, char** argv)
{
	int i;
	i = 0;

	if (argc <= 1) {
		printf("no parameter given!\n");
		return -1;
	}

	printf("Number of arguments: %i\n", (argc-1));

	for (i = 1; i < argc; i++) {
		printf("> argument %i: %s\n", i, argv[i]);
	}

	return 0;
}
