#include <stdio.h>
#include "stat.h"

int main(char argc, char** argv)
{
	printf("mean(10, 20, 10, 20) = %.2f\n", mean(4, 10, 20, 10, 20));
	printf("mean(1, 2, 3, 4, 5)  = %.2f\n", mean(5, 1, 2, 3, 4, 5));

	return 0;
}
