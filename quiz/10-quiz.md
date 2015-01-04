# Musterlösung zur Kontrollfrage 10
---
[Zurück](README.md)

### Frage
Wie erzeugen Sie die folgende Ausgabe?
```
Das ist ein Backslash "\".
```

### Antwort
```c
printf("Das ist ein Backslash \"\\\".\n");
```

### Erklärung
Jede Spezialzeichne aus dem ASCII Zeichensatz muss 'escaped' werden
mit einem `\`. Hierzu gehören sowohl die Anführungszeichen `"` als
auch der Backshash `\`.

Um ein Anführungzeichen auszugeben kann dieses nicht einfach als
`"` angegeben werden, sonder muss 'escaped' werden mit `\"`. Das
gleiche gilt für den Backslash welcher 'escaped' wird als `\\`.

Hier ein vollständiged Programm zur Verdeutlichung.
```c
#include <stdio.h>

int main(char argc, char** argv)
{
	printf("Das ist ein Backslash \"\\\".\n");

	return 0;
}
```
