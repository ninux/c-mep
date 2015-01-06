# Void-Pointer
---
[Zurück](../README.md)

### Programm
```c
#include <stdio.h>

int main(char argc, char** argv)
{
	void* ptr;
	int a, b;

	a = 5;
	b = 2;

	ptr = (int*)&a;

	printf("a + b = %i + %i = %i\n", a, b, a+b);
	printf("*ptr + b = %i + %i = %i\n", *(int*)ptr, b, *((int*)ptr)+b);

	return 0;
}
```

### Ausgabe
```
a + b = 5 + 2 = 7
*ptr + b = 5 + 2 = 7
```

### Hinweise
Ein `void`-Pointer ist ein typenloser Zeiger. Möchte man auf eine Variable
zeigen mit einem `void`-Pointer, so muss nicht nur die Adress dieser Variablen
angegenen werden, sondern auch ein Cast muss erfolgen, damit der
`void`-Pointer den richtigen Typ erhält.

Hier ein Beispiel eines `int`-Pointer`
```c
int a;
int* ptr;

a = 5
ptr = &a;
```
und das Pendant dazu mit einem `void`-Pointer
```c
int a;
void* ptr;

a = 5
ptr = (int*)&a;
```

Möchte man den Inhalt des angezeigten auslesen, so muss hier wiederum der Typ
angegeben werden.

Hier ein Beispiel für das Auslesen einer Variable die mit einen `int`-Pointer
angezeigt wird
```c
int a, b;
int* ptr;

a = 5;
ptr = &a;
b = *ptr;
```
und das Pendant dazu mit einem `void`-Pointer
```c
int a, b;
void* ptr;

a = 5;
ptr = (int*)&a;
b = *(int*)ptr;
```
