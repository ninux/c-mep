# Musterlösung zur Kontrollfrage 4
---
[Zurück](README.md)

### Frage
Was macht folgender Code?
```c
int i = 0;
do {
	if (i++ % 2)
		continue;
	printf("%d\n", i);  
} while (i < 10);
```
### Antwort
Der Code gibt alle ungeraden Zahlen aus von 1 bis 10.
```
1
3
5
7
9
```

### Erklärung
Die `if` Bedingung prüft, ob die die Zahl `i++` durch zwei teilbar ist
ohne Rest. Falls dies zutrifft, ist die Zahl gerade und `continue` wird
ausgeführt. `continue` veranlasst, dass das Programm an die Bedingung
springt, also zur `if` Bedingung. Bei ungeraden Zahlen gibt es einen Rest,
somit wird `continue` nicht ausgeführt und und die Zahl ausgegeben.
