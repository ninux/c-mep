# Musterlösung zur Kontrollfrage 15
---
[Zurück](README.md)

### Frage
Was macht folgende Struktur?
```c
void addpoint(struct point* p1, const struct point* p2)
{
	p1->x += p2->x;
	p1->y += p2->y;
}
```

### Antwort
Die Funktion `addpoint` nimmt zwei pointer auf `struct` als Parameter an
und gibt nichts zurück.

### Erklärung
* Wird ein Parameter als pointer übergeben, so wird nicht der Parameter auf den Funktionsstack kopiert, sondern die Funktion behandelt direkt den angezeigten Parameter (da die 'Adresse' übergeben wurde)
* Wird ein Parameter als pointer übergeben mit dem Schlüsselwort `const` so bedeutet dies, dass die Funktion den angezeigten Parameter nicht ändern kann ('read-only')
* Werden pointer als Parameter übergeben, so muss das Ergebnis der Funktion nicht zurückgegeben werden, denn es ist bereits im 'Original' eingetragen.
* Auf Elemente eines `struct` kann nicht mit dem Punkt-Operator zugegriffen werden (`p1.x`) wenn diese als pointer angegeben sind, sondern auf diese muss mit dem Pfeil-Operator zugegriffen werden (`p1->x`). Mit den Punktoperator geht es ebenfalls aber dann gilt die folgende Notation `(*p1).x` welche gleichbedeutend ist mit `p1->x`.
* Als Rückgabe einer Funktion welche pointer als Parameter hat, kann z.B. der pointer auf den Parameter mit dem Ergebnis gezeigt werden. Das folgenden Beispiel verdeutlicht dies.
```c
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point* addpoint(struct point* p1, const struct point* p2);


int main(char argc, char** argv)
{
	struct point a;
	struct point b;
	struct point* c;

	a.x = 1;
	a.y = 1;

	b.x = 2;
	b.y = 2;

	c = addpoint(&a, &b);

	printf("c.x = %i\n", c->x);
	printf("c.y = %i\n", c->y);

	return 0;
}

struct point* addpoint(struct point* p1, const struct point* p2)
{
	p1->x += p2->x;
	p1->y += p2->y;

	return p1;
}
```
