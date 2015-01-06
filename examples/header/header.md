# Header Dateien
---
[Zurück](../README.md)

### Schlechtes Beispiel (alle eine Datei)

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

### Verbesserung (verteilter Code)

#### main.c

#### math.h

#### math.c
