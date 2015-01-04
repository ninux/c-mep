# Musterlösung zur Kontrollfrage 11
---
[Zurück](README.md)

### Frage
Wieso können Sie die dynamische Speicherallokation auf kleinen,
eingebetteten Systemen selten verweden?

### Antwort
Weil die C-Runtime auf solchen Systemen dies nicht implementiert.

### Erklärung
Die C-Runtime (C-Runtime-Environment) stellt grundlegende Funktionalitäten
zu Verfügung, wie etwas das Laden des `main()`, das initialisieren des
Stack und das Handling vom Speicher (`malloc() usw.`).

Bei einem Mikrocontroller ist dies sehr minimalistisch ausgelegt und oft
wird gesagt, dass es keine Runtime hat. Typisch fällt dabei das
Speichermanagemnt mit `malloc()` weg.

Bei anderen Programmiersprachen gehört zum Runtime-Environment z.B. das
Thread- und Exception-Management dazu, was C nicht hat.

Ein einfaches Beispiel ist die Verarbeitung der Kommandozeilenparameter
(`argc, argv`) für ein typisches `main()` der Form
```c
int main(char argc, char** argv)
{
	...

	return 0;
}
```
Diese müssen von der Runtime behandelt werden. Dies gilt ebeso für den
Rückgabewert der `main()` Funktion. Dieser wird der Runtime übergeben.
