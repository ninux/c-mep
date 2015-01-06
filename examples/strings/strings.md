### Strings
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include "string.h"

int main(char argc, char** argv)
{
	int i;

	if (argc <= 1) {
		printf("no parameter given!\n");
	}

	for (i = 1; i < argc; i++) {
		print_string(*(argv+i));
		printf(" ");
	}

	printf("\n");

	return 0;
}
```

#### string.h
```c
#ifndef STRING_H
#define STRING_H

int print_string(char* string);

#endif /* STRING_H */
```

#### string.c
```c
#include <stdio.h>
#include <string.h>

int print_string(char* string)
{
	int i;
	char c;

	i = 0;

	while ((c = *(string+i)) != '\0') {
		printf("%c", c);
		i++;
	}

	return 0;
}
```

### Command-line
```
[user@machine coding]$ ./main.o Hello world, this is C programming!
Hello world, this is C programming! 
```
