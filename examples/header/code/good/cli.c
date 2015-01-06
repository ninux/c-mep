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
