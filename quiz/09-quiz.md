# Musterlösung zur Kontrollfrage 9
---
[Zurück](README.md)

### Frage
Definieren Sie einen aufzählenden Typ `Color_t`, der die drei Werte
`ROT = 0`, `BLAU = 5` und `GELB = 6` hat.

### Antwort
```c
typedef enum{
	ROT,
	BLAU = 5,
	GELB,
} Color_t;
```

### Erklärung
Die Aufzählung eines `enum` erfolgt in `int`, beginnt bei `0` und wird
um `1` inkrementiert. Um das erste Element als `0` zu haben, reicht es
demnach aus, einfach den Bezeichner zu deklarieren. Das nächste Element
soll einer `5` zugewiesen werden. `0+1 = 1` und nicht `5` also muss die
Zuweisung `BLAU = 5` explizit erfolgen. Das folgende Element soll `6`
zugewiesen werden. `5+1 = 6` also muss nur das Element deklariert werden.

Hier ein einfaches Beispiel um die Antwort zu erläutern mit Verwendung
des neuen Typs.
```c
#include <stdio.h>

typedef enum{
	ROT,
	BLAU = 5,
	GELB,
} Color_t;

int main(char argc, char** argv)
{
	Color_t my_color;
	Color_t your_color;

	printf("ROT = %i\n", ROT);
	printf("BLAU = %i\n", BLAU);
	printf("GELB = %i\n", GELB);

	my_color = BLAU;
	your_color = ROT;

	printf("My color is %i\n", my_color);
	printf("Your color is %i\n", your_color);

	return 0;
}
```
