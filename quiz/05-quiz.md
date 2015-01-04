# Musterlösung zur Kontrollfrage 5
---
[Zurück](README.md)

### Frage
Erklären Sie den folgenden Code.
```c
int i, limit = 100;
char c;
char s[100];

for (i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; i++) {
	s[i] = c;
}

s[i] = '\0';
```

### Antwort
Die Eingabe wird in das Array `s` abgelegt.

#### Erklärung
Für das Beispiel ist ein vorllständiges Programm erstellt worden, welches
die Zeichenkette ausgibt.
```c
#include <stdio.h>

int main(char argv, char** argc)
{
	int i, limit = 100;
	char c;
	char s[100];

	for (i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}

	s[i] = '\0';

	printf("Your input was: \"%s\"\n", s);

	return 0;
}
```

