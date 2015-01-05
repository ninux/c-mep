# Variable Parameterliste
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include "stat.h"

int main(char argc, char** argv)
{
	printf("mean(10, 20, 10, 20) = %.2f\n", mean(4, 10, 20, 10, 20));
	printf("mean(1, 2, 3, 4, 5)  = %.2f\n", mean(5, 1, 2, 3, 4, 5));

	return 0;
}
```

#### stat.h
```c
#ifndef STAT_H
#define STAT_H

float mean(int elements, ...);

#endif /* STAT_H */
```

#### stat.c
```c
#include <stdio.h>
#include <stdarg.h>
#include "stat.h"

float mean(int elements, ...)
{
	/* define pointer to the argument list */
	va_list arglist;

	float sum;
	int i;

	sum = 0.0f;
	i = 0;

	/* init list for number of elements */
	va_start(arglist, elements);

	for (i = 0; i < elements; i++) {
		/* sum up with the next argument out of the argument list
		 * read the argument as an integer value */
		sum += va_arg(arglist, int);
	}

	/* clean the memory for the defined argument list */
	va_end(arglist);

	return sum/elements;
}
```

### Ausgabe
```
mean(10, 20, 10, 20) = 15.00
mean(1, 2, 3, 4, 5)  = 3.00
```

### Hinweise
Die genaue Funktionsweise ist gut dokumentiert auf
* [tutorialspoint: C - Variable Arguments (en)](http://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm)
* [Gallileo Computing - C von A bis Z - Arbeiten mit variabel langen Argumentlisten – <stdarg.h>](http://openbook.galileo-press.de/c_von_a_bis_z/018_c_stdarg_h_001.htm)
* [Mario Konrad - Variable Parameterlist](http://www.mario-konrad.ch/wiki/doku.php?id=programming:variable_parameterlist)
