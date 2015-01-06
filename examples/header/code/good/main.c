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
