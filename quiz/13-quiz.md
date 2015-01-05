# Musterlösung zur Kontrollfrage 13
---
[Zurück](README.md)

### Frage
Was macht die folgende Struktur?
```c
void addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
}
```

### Antwort
Die Funktion `addpoint` nimmt zwei Parameter an mit call-by-value und
hat keine Rückgabe.

### Erklärung
* Eine Funktion, welche als Rückgabetyp `void` hat, gibt nichts zurück.
* Parameter, welche keine pointer sind, sind per call-by-value übergeben.
* call-by-value heisst, der Inhalt der übergebenen Parameter wird für die Funktion auf den Funktionsstack kopiert und beim beenden der Funktion gelöscht.

Das folgende Programm verdeutlicht das Verhalten der Funktion (hier mit
Rückgabe).
```c
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point addpoint(struct point p1, struct point p2);


int main(char argc, char** argv)
{
	struct point a;
	struct point b;
	struct point c;

	a.x = 1;
	a.y = 1;

	b.x = 2;
	b.y = 2;

	c = addpoint(a, b);

	printf("c.x = %i\n", c.x);
	printf("c.y = %i\n", c.y);

	return 0;
}

struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;

	return p1;
}
```
