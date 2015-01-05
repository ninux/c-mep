# Mehrdimensionale Arrays
---
[Zurück](../README.md)

### Programm

#### main.c
```c
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
```

#### matrix.h
```c
#ifndef MATRIX_H
#define MATRIX

int** create_matrix(const int rows, const int cols, const int init);
int destroy_matrix(int** matrix);

#endif /* MATRIX */
```

#### matrix.c
```c
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
```

### Ausgabe
```
5	5	5	5	
5	5	5	5	
5	5	5	5
```
