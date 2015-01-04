# Musterlösung zur Kontrollfrage 3
---
[Zurück](README.md)

### Frage
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

### Antwort
Der Code setzt x auf drei, wenn a drei ist. Zusätzlich setzt es y auf drei,
falls b drei ist. Ist b ungleich drei, so wird x auf vier gesetzt.

### Erklärung
Der Code ist ungünstig (falsch) eingerückt. Mit einer besseren Darstellung
wird der Code deutlich klarer.
```c
y = 4;

if (a == 3) {
	x = 3;
}

if (b == 3) {
	y = 3;
} else {
	x = 4;
}
```
