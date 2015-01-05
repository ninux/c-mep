# Macro
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include "debug.h"
#include "compare.h"

int main(char argc, char** argv)
{
	_dbginfo();
	int a, b, c = 0;

	a = 5;
	b = 7;
	c = getmax(a, b);

	printf("a = %i\nb = %i\nc = %i\n", a, b, c);

	_dbgmsg("did it work?");

	return 0;
}
```

#### compare.h
```c
#ifndef COMPARE_H
#define COMPARE_H

#define getmax(a, b) ((a) > (b) ? (a) : (b))

#endif
```

#### debug.h
```c
#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
#define _dbginfo() printf("<DEBUG>: "		\
			  "build information:"	\
			  "\n\t Date\t%s"	\
			  "\n\t Time\t%s "	\
			  "\n\t GCC\t%s"	\
			  "\n\t C rev\t%i\n",	\
			  __DATE__,		\
			  __TIME__,		\
			  __VERSION__,		\
			  __STDC_VERSION__)
#else
#define _dbginfo()
#endif

#ifdef DEBUG
#define _dbgmsg(MESSAGE, ...) printf("<DEBUG>: " MESSAGE "\n", ##__VA_ARGS__)
#else
#define _dbgmsg(MESSAGE, ...)
#endif

#endif /* DEBUG_H */
```

### Ausgabe

#### Ohne debug flag
```
a = 5
b = 7
c = 7
```

#### Mit debug flag
```
<DEBUG>: build information:
	 Date	Jan  5 2015
	 Time	15:46:34 
	 GCC	4.9.2 20141224 (prerelease)
	 C rev	201112
a = 5
b = 7
c = 7
<DEBUG>: did it work?
```
