# Funktionspointer
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include "calc.h"

int (*add_function)(int, int) = NULL;
int (*sub_function)(int, int) = NULL;

int subtract(int a, int b, int (*sub_function)(int, int));

int main(char argc, char** argv)
{
	int a, b, c, d, e= 0;

	add_function = &add;

	a = 5;
	b = 2;
	c = add_function(a, b);
	d = (*add_function)(a, b);

	printf("%i + %i = %i\n", a, b, c);
	printf("%i + %i = %i\n", a, b, d);

	e = subtract(a, b, &sub);

	printf("%i - %i = %i\n", a, b, e);

	return 0;
}

int subtract(int a, int b, int (*sub_function)(int, int))
{
	return sub_function(a, b);
}
```

#### calc.h
```c
#ifndef CALC_H
#define CALC_H

int add(int a, int b);
int sub(int a, int b);

#endif /* CALC_H */
```

#### calc.c
```c
#include <stdio.h>
#include "calc.h"

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}
```

### Ausgabe
```
5 + 2 = 7
5 + 2 = 7
5 - 2 = 3
```

### Quellen zun Nachschlagen
* [Stackoverflow - How do function pointers in c work?](http://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work)
