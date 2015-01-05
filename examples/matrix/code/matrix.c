#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

static int _print_matrix(int** matrix, const int rows, const int cols);

int** create_matrix(const int rows, const int cols, const int init)
{
	int** matrix;
	int r, c;

	r = c = 0;

	matrix = (int**)calloc((rows+1), sizeof(int*));
	if (matrix == NULL) {
		return NULL;
	} else {
		matrix[rows] = NULL;
	}

	for (r = 0; r < rows; r++) {
		matrix[r] = (int*)malloc(sizeof(int)*cols);
		if (matrix[r] == NULL) {
			while ((r-1) >= 0) {
				r -= 1;
				free(matrix[r]);
			}
			free(matrix);
			return NULL;
		} else {
			for (c = 0; c < cols; c++) {
				matrix[r][c] = init;
			}
		}
	}

	_print_matrix(matrix, rows, cols);

	return matrix;

}

int _print_matrix(int** matrix, const int rows, const int cols)
{
	if (matrix == NULL) {
		printf("nothing to print...");
		return -1;
	}

	int r, c;
	r, c = 0;

	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++) {
			printf("%i\t", matrix[r][c]);
		}
		printf("\n");
	}

	return 0;
}

int destroy_matrix(int** matrix)
{
	int ctr;
	ctr = 0;

	if (matrix == NULL) {
		printf("nothing to destroy...");
	}

	while (matrix[ctr] != NULL) {
		free(matrix[ctr]);
		ctr++;
	}

	free(matrix);

	return 0;
}
