# Musterlösung zur Kontrollfrage 7
---
[Zurück](README.md)

### Frage
Was machen die folgenden Zeilen?
```c
void xxx(char to[], const char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
```

### Antwort
Die Zeichenkette wird Zeichenweise von `from` nach `to` kopiert.

### Erklärung
Die Deklaration `char to[]` ist identisch mit `char* to` und somit
sind dies einfach pointer auf `char`. Der Index `i` bezeichnet den
Offset zum Anfang der der Zeichenkette und beim `'\0'` wird das
Kopieren abgebrochen. Da die Zuweisung aber vor dem Vergleich
bereits erfolgt ist, ist dieses ebenfalls kopiert worden.

Das folgende Programm verdeutlicht dies.

```c
#include <stdio.h>

void xxx(char* to, const char* from);

int main(char argc, char** argv)
{
	char* a;
	char* b;

	a = "Hello World!";
	xxx(b, a);

	printf("%s\n", b);

	return 0;
}

void xxx(char* to, const char* from)
{
	int i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
```
