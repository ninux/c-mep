# Bitshifting
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "bitop.h"

/*
*Wandelt die in mit dem Parameter übergebenen Zahlen in Binärfolgen um und druckt dies in der Konsole aus
*/

int main(char argc, char** argv)
{
	int i, n;
	// Kontrolle dass Parameter übergeben wurde
	if (argc <= 1) {
		printf("no parameter given!\n");
		return -1;
	}
	
	// Für jedes gefüllte geld des Parameters argv wird eine Wandlung gestartet
	for (i = 1; i < argc; i++) {
		print_bits(atoi(argv[i]));
	}

	return 0;
}

```

#### bitop.h
```c
#ifndef BITOP_H
#define BITOP_H

typedef int boolean;
#define true 1
#define false 0

int print_bits(int value);

#endif /* BITOP_H */

```

#### bitop.c
```c
#include <stdio.h>
#include <stdlib.h>
#include "bitop.h"

int print_bits(int value)
{
	int b, n, i, pos, orig;
	char* bits; // charpointer bits deklarieren

	orig = value; 
	n = (sizeof(int)*8); anzahl bits einer integer variable ermitteln sizeof(int = 4 ( bytes) * 8 bits

	bits = (char*)calloc((n+1), sizeof(char)); // speicher für 33 Felder alloszieren => 32 bits plus Endmarkierung \0
	if (bits == NULL) { // abbruch  bei Fehler
		return -1;
	}

	for (pos = n; pos >= 0; pos--) { // jedes Bit einzeln durchgehen
		bits[pos] = (value & 1)+'0'; // wert mit 1 und verknüpen kleines Bsp: 101 & 001 = 1 heisst wert 1 in Feld speichern
		value = value >> 1; // Value um ein Bit nach rechts shiften
	}

	bits[n+1] = '\0'; // wenn alle bits durchiteriert endmarkierung in letztes Feld speichern

	printf("%i d = ", orig); // original zahl auf konsole ausgeben

	i = 0;
	while (bits[i] == '0') { // felder durchiterieren bis das erste mal eine 1 kommt
		i++;
	}

	if (bits[i] == '\0') { // falls alle 0 0 drucken 
		printf("0");
	} else {
		while (i <= n) {
			putchar(bits[i]); // anderfalls die restlichen Felder auf konsole ausgeben
			i++;
		}
	}

	printf(" b\n");

	free(bits); // speicher wieder freigeben um memory leak zu vermeiden

	return 0;
}
```

### Command-line
```
[user@machine coding]$ ./main.o
no parameter given!
[user@machine coding]$ ./main.o 1
1 d = 1 b
[user@machine coding]$ ./main.o 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
0 d = 0 b
1 d = 1 b
2 d = 10 b
3 d = 11 b
4 d = 100 b
5 d = 101 b
6 d = 110 b
7 d = 111 b
8 d = 1000 b
9 d = 1001 b
10 d = 1010 b
11 d = 1011 b
12 d = 1100 b
13 d = 1101 b
14 d = 1110 b
15 d = 1111 b
```
