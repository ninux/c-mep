# Kontrollfragen
---
[Zurück](../README.md)

### 1 - Welchen Wert hat w?
```c
int w = 034
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
