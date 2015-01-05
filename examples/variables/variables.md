# Variablen (lokale, globale, `static` und `extern`)
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include "count.h"

extern int end;
int global = 5;

void foo();

int main(char argc, char** argv)
{
	int i;

	i = 0;

	printf("static int\tauto int\n");
	for (i = 0; i < 10; i++) {
		increment();
	}

	printf("The default start value is %i\n", DEFAULT_START_VALUE);
	/* printf("The start value is %i\n", start);  <- won't compile! */
	printf("The end value is %i\n", end);

	printf("global (main) = %i\n", global);
	foo();

	return 0;
}

void foo(void)
{
	int global = 6;
	printf("global (foo) = %i\n", global);
}
```


#### count.h
```c
#ifndef COUNT_H
#define COUNT_H

#define DEFAULT_START_VALUE 10
#define DEFAULT_END_VALUE 10*DEFAULT_START_VALUE

void increment(void);

#endif /* COUNT_H */
```

#### count.c
```c
#include <stdio.h>
#include "count.h"

static int start = DEFAULT_START_VALUE;
int end = DEFAULT_END_VALUE;

void increment(void)
{
	static int ctr1 = 10;
	int ctr2 = start;

	ctr1++;
	ctr2++;

	printf("c1 = %i\t\tc2 = %i\n", ctr1, ctr2);
}
```

### Ausgabe
```
static int	auto int
c1 = 11		c2 = 11
c1 = 12		c2 = 11
c1 = 13		c2 = 11
c1 = 14		c2 = 11
c1 = 15		c2 = 11
c1 = 16		c2 = 11
c1 = 17		c2 = 11
c1 = 18		c2 = 11
c1 = 19		c2 = 11
c1 = 20		c2 = 11
The default start value is 10
The end value is 100
global (main) = 5
global (foo) = 6
```

### Hinweise
* Eine Variable die global mit `static` deklariert wird, ist file-private
* Eine Variable die in einer Funktion mit `static` deklariert wird, wird genau einmal angelegt und bleibt bestehen
* Eine Variable die global mit `extern` deklariert wird, muss in einem anderen file deklariert sein
