#include <stdio.h>
#include <stdlib.h>

int main(char argc, char** argv)
{
	double* values;
	double number = 1.0;
	int i;

	values = (double*)malloc(sizeof(number)*10);

	for (i = 0; i < 10; i++) {
		values[i] = number;
	}

	for (i = 0; i < 10; i++) {
		printf("Value %i = %.1f\n", i, values[i]);
	}

	free(values);

	return 0;
}
