# Musterlösung zur Kontrollfrage 8
---
[Zurück](README.md)

### Frage
Braucht es zwei Klammerpaare in der Aufgabe 7?

### Antwort
Ja

### Erklärung
Ohne die Klammer um `to[i] = from[i]` wird nicht das Zeichen `i` von
`from` nach `to` kopiert, sondern das Ergebnis vom Verlgeich 
`from[i] != '\0'`. Also werden statt der Zeichen die Zahlen 1 für `true`
und 0 für `false` übertragen nach `to`.

Das folgene Programm verdeutlich dies.
```c
#include <stdio.h>

void xxx(char* to, const char* from);

int main(char argc, char** argv)
{
	char* a;
	char* b;

	a = "Hello World!";
	xxx(b, a);

	// printf("%s\n", b);

	return 0;
}

void xxx(char* to, const char* from)
{
	int i = 0;
	while (to[i] = from[i] != '\0') {
		printf("to[%i] = %i\n", i, to[i]);
		i++;
	}
	printf("to[%i] = %i\n", i, to[i]);
}
```

Ausgabe:
```
to[0] = 1
to[1] = 1
to[2] = 1
to[3] = 1
to[4] = 1
to[5] = 1
to[6] = 1
to[7] = 1
to[8] = 1
to[9] = 1
to[10] = 1
to[11] = 1
to[12] = 0
```
