#include <stdio.h>

int main(char argv, char** argc)
{
	int i = 0;

	do {
		if (i++ % 2) {
			continue;
		}
		printf("%d\n", i);
	} while (i < 10);

	return 0;
}
