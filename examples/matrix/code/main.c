#include <stdio.h>
#include "matrix.h"

int main(char argc, char** argv)
{
	int** matrix;
	int rows, cols, init;

	rows = 3;
	cols = 4;
	init = 5;

	matrix = create_matrix(rows, cols, init);
	destroy_matrix(matrix);

	return 0;
}
