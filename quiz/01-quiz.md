# Musterlösung zur Kontrollfrage 1
---
[Zurück](README.md)

### Frage
Welchen Wert hat w?

```c
int w = 034;
```

### Antwort
`w` hat den Wert 28.

### Erklärung
Die `0` als Prefix zur Zahl `34` zeigt an, dass es sich um eine oktale Zahl
handelt. Die `int` Variable `w` hat also den Wert `3*8 + 4 = 24 + 4 = 28`
(dezimal).

In C kann eine Zahl dezimal, oktal und hexadezimal angegeben werden. Die
folgende Tabelle liefert eine Übersicht für die Zahl `24` (dezimal).

| Typ         | Beispiel       |
|-------------|----------------|
| Dezimal     | `int w = 28;`  |
| Hexadezimal | `int w = 0x1C;`|
| Oktal       | `int w = 034;` |

Die oben gezigten Beispiele gelten für Ganzzahlen. Möchte man Zeichen
(`char`) definieren, so kann man dies ebenfalls machen. Die folgende
Tabelle liefert eine Übersicht für das Zeichen `A`.

| Typ         | Beispiel            |
|-------------|---------------------|
| Zeichen     | `char w = 'A';`     |
| Dezimal     | `char w = '65';`    |
| Hexadezimal | `char w = '\x41';`  |
| Oktal       | `char w = '\o101';` |

TODO
