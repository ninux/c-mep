# Command-line arguments
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>

int main(char argc, char** argv)
{
	int i;
	i = 0;

	if (argc <= 1) {
		printf("no parameter given!\n");
		return -1;
	}

	printf("Number of arguments: %i\n", (argc-1));

	for (i = 1; i < argc; i++) {
		printf("> argument %i: %s\n", i, argv[i]);
	}

	return 0;
}
```

### Command-line
```
[user@machine coding]$ ./main.o
no parameter given
[user@machine ~]$ ./main.o c
Number of arguments: 1
> argument 1: c
[user@machine codind]$ ./main.o c is
Number of arguments: 2
> argument 1: c
> argument 2: is
[user@machine coding]$ ./main.o c is great
Number of arguments: 3
> argument 1: c
> argument 2: is
> argument 3: great
```
