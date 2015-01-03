# Kontrollfragen
---
[Zurück](../README.md)

### Frage 1
Welchen Wert hat w?
```c
int w = 034;
```
[Lösung](01-quiz.md)

### Frage 2
Wie lauten die Ergebnisse?
```c
unsigned int a = 3, b = 5, c = 7;
unsigned int x, y, z;

x = a == 3;
y = (a << 1) & b;
z = (a > 3) ? b : c;
```
[Lösung](02-quiz.md)

### Frage 3
Folgender Code soll x auf 3 setzen wenn a drei ist (sonst 4) und y auf 3
setzen, wenn a und b drei ist. Was macht dieser Code?
```c
y = 4;
if (a == 3)
	x = 3;
	if (b == 3)
		y = 3;
else
	x = 4;
```
[Lösung](03-quiz.md)

### Frage 4
Was macht folgender Code?
```c
int i = 0;
do {
	if (i++ % 2)
		continue;
	printf("%d\n", i);	
} while (i < 10);
```
[Lösung](04-quiz.md)

### Frage 5
Erklären Sie folgenden Code.
```c
int i, limit = 100;
char c;
char s[100];

for (i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; i++) {
	s[i] = c;
}
s[i] = '\0';
```
[Lösung](05-quiz.md)

### Frage 6
Welche Ausgabe erhalten Sie mit folgender Anweisung?
```c
float pi = 4.14156f;
printf("%s%f\n", "Pi=", pi);
```
[Lösung](06-quiz.md)

### Frage 7
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
[Lösung](07-quiz.md)

### Frage 8
Braucht es zwei Klammerpaare in der Aufgabe 7?
[Lösung](08-quiz.md)

### Frage 9
Definieren Sie den Typ und initialisieren Sie diesen wie verlangt.
Typ soll `Color_t` sein mit den drei Werten `ROT = 0`, `BLAU = 5` und
`GELB = 6`.
[Lösung](09-quiz.md)

### Frage 10
Wie erzeugen Sie die folgende Ausgabe?
```
Das ist ein Backslash "\".
```
[Lösung](10-quiz.md)

### Frage 11
Wieso können Sie die dynamische Speicherallokation auf kleinen,
eingebetteten Systemen selten verweden?
[Lösung](11-quiz.md)

### Frage 12
Kreieren Sie dynamisch einen Vektor für 10 `double` Werte und
initialisieren Sie alle Elemente mit dem Wert `1.0`.
[Lösung](12-quiz.md)

### Frage 13
Was macht die folgende Struktur?
```c
void addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
}
```
[Lösung](13-quiz.md)

### Frage 14
Was macht die folgende Struktur?
```c
struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;

	return p1;
}
```
[Lösung](14-quiz.md)

### Frage 15
Was macht folgende Struktur?
```c
void addpoint(struct point* p1, const struct point* p2)
{
	p1->x += p2->x;
	p1->y += p2->y;
}
```
[Lösung](15-quiz.md)

### Frage 16
Was macht die folgende Funktion?
```c
int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getchar()) == ' ' || c == '\t');
	
	if (!isdigit(c) && c != '.') {
		s[1] = '\0';
		return(c);
	}

	i = 0;
	if (isdigit(c))
		while (isdigit(s[i++] = c = getchar()));
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return(NUMBER);
}
```
[Lösung](16-quiz.md)

### Frage 17
Füllen Sie die Lücken `__n__` (n=1..4) mit den passenden Angaben.
```c
main()
{
	float* f; int i;

	if (getFloatArray(10, __1__))
		for (i=0; i<10; i++)
			printf("%dter Wert: %f\n", i, *(f+1));
	free(f);
}
```

```c
int getFloatArray(int size, __2__ array)
{
	int i, rc = 0;

	__3__ = (float *)malloc(size*sizeof(float));
	if (*array != NULL) {
		for (i=0; i<size; i++)
			__4__ = 0.0f;
		rc = 1;
	}
	return rc;
}
```
[Lösung](17-quiz.md)
