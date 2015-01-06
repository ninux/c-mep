# Header Dateien
---
[Zurück](../README.md)

### Schlechtes Beispiel (alles eine Datei)

#### main.c
```c
#include <stdio.h>
#include <string.h>

#define SUCCESS 0
#define ERR -1
#define ERR_WRONG_ARGS -2
#define ERR_UNKNOWN_OP -3

#define ADD 1
#define SUB 2

typedef int bool;
#define true 1
#define false 0

int add(int a, int b);
int sub(int a, int b);
void show_all(int a, int b);

int main(char argc, char** argv)
{
	int op, op1, op2, acc;
	op = op1 = op2, acc = 0;

	if (argc <= 1) {
		printf("no arguments given!");

	} else if ((argc < 4) || (argc > 4)) {
		printf("wrong number of arguments!");
	} else {
		op = atoi(argv[1]);
		op1 = atoi(argv[2]);
		op2 = atoi(argv[3]);
	}

	switch (op) {
	case ADD:
		acc = add(op1, op2);
		printf("%i + %i = %i\n", op1, op2, acc);
		break;
	case SUB:
		acc = sub(op1, op2);
		printf("%i - %i = %i\n", op1, op2, acc);
		break;
	default:
		return ERR_UNKNOWN_OP;
	}

	return SUCCESS;
}

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}
```

#### Problemanalyse
Welche Bestandteile hat das Programm?
* Fehlercode-Definitionen
* Operations-Definitionen
* Typendefinitionen
* Funktionsdeklarationen
* Funktionsimplementierungen
* Argumentenprüfung
* Operationsentscheider
* Ausgabe

### Verbesserung (verteilter Code)

#### main.c
```c
#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "types.h"
#include "math.h"
#include "cli.h"

int main(char argc, char** argv)
{
	int op, op1, op2, result;
	op = op1 = op2, result = 0;

	if (check_args(argc) != true) {
		return ERR_WRONG_ARGS;
	}

	op = atoi(argv[1]);
	op1 = atoi(argv[2]);
	op2 = atoi(argv[3]);

	result = calculate(op, op1, op2);

	switch (op) {
	case ADD:
		printf("%i + %i = %i\n", op1, op2, result);
		break;
	case SUB:
		printf("%i - %i = %i\n", op1, op2, result);
		break;
	default:
		return ERR_UNKNOWN_OP;
	}

	return SUCCESS;
}
```

#### math.h
```c
#ifndef MATH_H
#define MATH_H

#define ADD 1
#define SUB 2

int calculate(int op, int op1, int op2);

#endif /* MATH_H */
```


#### math.c
```c
#include "math.h"

static int add(int a, int b);
static int sub(int a, int b);

int calculate(int op, int op1, int op2)
{
	int result;

	switch (op) {
	case ADD:
		result = add(op1, op2);
		break;
	case SUB:
		result = sub(op1, op2);
		break;
	default:
		result = 0;
	}

	return result;
}

static int add(int a, int b)
{
	return a+b;
}

static int sub(int a, int b)
{
	return a-b;
}
```


#### cli.h
```c
#ifndef CLI_H
#define CLI_H

bool check_args(char argc);

#endif /* CLI_H */
```


#### cli.c
```c
#include <stdio.h>
#include "types.h"
#include "error.h"

bool check_args(char argc)
{
	if (argc <= 1) {
		printf("no arguments given!");
		return false;
	} else if ((argc < 4) || (argc > 4)) {
		printf("wrong number of arguments!");
		return false;
	} else {
		return true;
	}
}
```


#### error.h
```c
#ifndef ERROR_H
#define ERROR_H

#define SUCCESS 0
#define ERR -1
#define ERR_WRONG_ARGS -2
#define ERR_UNKNOWN_OP -3

#endif /* ERROR_H */
```


#### types.h
```c
#ifndef TYPES_H
#define TYPES_H

typedef int bool;
#define true 1
#define false 0

#endif /* TYPES_H */
```
