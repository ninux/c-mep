# Musterlösung zur Kontrollfrage 1
---
[Zurück](README.md)

### Frage
Welchen Wert hat w?

```c
int w = 034;
```

### Antwort
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

TODO
