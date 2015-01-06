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
