# Musterlösung zur Kontrollfrage 2
---
[Zurück](README.md)

### Frage
Wie lauten die Ergebnisse?

```c
unsigned int a = 3, b = 5, c = 7;
unsigned int x, y, z;

x = a == 3;
y = (a << 1) & b;
z = (a > 3) ? b : c;
```

### Antwort
```
x = 1
y = 4
z = 7
```

### Erklärung
Bei `x = a == 3;` wird zuerst der Vergleich `a == 3` durchgeführt, welcher
`true` ist. In C ist `ture` als `1` dargestellt. Dieses Ergebnis wird nun
der Variable `x` zugewiesen, also ist `x = 1`.

Bei `y = (a << 1) & b;` wird zuerst die Variable `a` bitweise nach links
geschoben um eins. Danach wird diese UND-Verknüpft mit der Variable `b`.

| Variable       | Binärwert   | Dezimalwert |
|----------------|-------------|-------------|
| `a = 3`        | `0000'0011` | `3`         |
| `(a << 1)`     | `0000'0110` | `6`         |
| `b = 5`        | `0000'0101` | `5`         |
| `(a << 1) & b` | `0000'0100` | `4`         |

Bei `z = (a > 3) ? b : c;` wird zuerst geprüft, ob `a` grösser als `3` ist.
Wenn ja, dann wird `b` zugewiesen, sonst `c`. Diese Zeile ist also equivalent
mit
```c
if (a > 3) {
	z = b;
} else {
	z = c;
}
```

[Testcode](snippets/02-quiz/main.c)
