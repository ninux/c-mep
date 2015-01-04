# Musterlösung zur Kontrollfrage 16
---
[Zurück](README.md)

### Frage
Was macht die folgende Funktion?
```c
 1	int getop(char s[])
 2	{
 3		int i, c;
 4	
 5		while ((s[0] = c = getchar()) == ' ' || c == '\t');
 6		
 7		if (!isdigit(c) && c != '.') {
 8			s[1] = '\0';
 9			return(c);
10		}
11	
12		i = 0;
13		if (isdigit(c))
14			while (isdigit(s[i++] = c = getchar()));
15		s[i] = '\0';
16		if (c != EOF)
17			ungetch(c);
18		return(NUMBER);
19	}
```

### Antwort
| Zeilen | Beschreibung |
|--------|--------------|
| 5      | Solange das nächste Zeichen eingelesen bis kein Leerzeichen oder Tabulator kommt. |
| 7-10   | Falls das Zeichen keine Nummer oder Punkt ist, so wir die Zeichenkette beendet.   |
| 13-14  | Falls das Zeichen eine Nummer ist, werden die darauffolgenden Zeichen geprüft.    |
| 15     | Beim ersten Zeichen, das keine Nummer ist, wird die Zeichenkette abgebrochen.     |
| 16-17  | Falls das letzte eingelesene Zeichen `EOF` ist, dann wird es wieder zurückgelegt. |
