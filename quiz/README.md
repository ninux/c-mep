# Kontrollfragen
---
[Zurück](../README.md)

### 1 - Welchen Wert hat w?
```c
int w = 034;
```
[Lösung](01-quiz.md)

### 2 - Wie lauten die Ergebnisse?
```c
unsigned int a = 3, b = 5, c = 7;
unsigned int x, y, z;

x = a == 3;
y = (a << 1) & b;
z = (a > 3) ? b : c;
```
[Lösung](02-quiz.md)

### 3 - Folgender Code soll x auf 3 setzen wenn a drei ist (sonst 4) und y auf 3 setzen, wenn a und b drei ist. Was macht dieser Code?
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

### 4 - Was macht folgender Code?
```c
int i = 0;
do {
	if (i++ % 2)
		continue;
	printf("%d\n", i);	
} while (i < 10);
```
[Lösung](04-quiz.md)

### 5 - Erklären Sie folgenden Code.
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

### 6 - Welche Ausgabe erhalten Sie mit folgender Anweisung?
```c
float pi = 4.14156f;
printf("%s%f\n", "Pi=", pi);
```
[Lösung](06-quiz.md)

### 7 - Was machen die folgenden Zeilen?
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

### 8 - Braucht es zwei Klammerpaare in der Aufgabe 7?
[Lösung](08-quiz.md)

### 9 - Definieren Sie den Typ und initialisieren Sie diesen wie verlangt.
Typ soll `Color_t` sein mit den drei Werten `ROT = 0`, `BLAU = 5` und
`GELB = 6`.
[Lösung](09-quiz.md)

### 10 - Wie erzeugen Sie die folgende Ausgabe?
```shell
Das ist ein Backslash "\".
```
[Lösung](10-quiz.md)
