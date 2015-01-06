#include <stdio.h>
#include <stdlib.h>
#include "error.h"
#include "types.h"
#include "math.h"
#include "cli.h"

int main(char argc, char** argv)
{
	int op, op1, op2, acc;
	op = op1 = op2, acc = 0;

	if (check_args(argc) != true) {
		return ERR_WRONG_ARGS;
	}

	op = atoi(argv[1]);
	op1 = atoi(argv[2]);
	op2 = atoi(argv[3]);

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
