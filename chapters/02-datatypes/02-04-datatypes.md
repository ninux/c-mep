# Zeiger (Pointer)
---

#### Allgemein

* Zeiger ist eine Variabel, welche eine Adresse enthält. Sie zeigt also auf etwas.
* Vektoren oder Arrays sing verwandt mit Zeigern.
* Vorteile von Zeiger (Pointer)
  * Sie führen zu kompakteren, effizienteren Programmen
  * Der Code wird verständlicher und lesbarer
  * gewisse Parameter können nur über Zeiger übergeben werden
  * Sie vereifachen das Programm
  * 4 Byte auf 32bit systemen und 8 Byte auf 64bit Systemen (?) 
  
Beispiel:
```c
char c;                 //Definition einer char-Variable c

char *ichBinPointer;    // Zeiger (4 Byte) auf einen char(1 Byte)
char* ichBinAuchPointer // gleiche Deklaration. => Stern an anderer Stelle

ichBinPointer = &c;     // Zuweisung Adresse von c an Zeiger. & ist Adress-Operator
*ichBinPointer = 45;    // * ist Inhalts-Operator => *ichBinPointer ist Inhalt wo ichBinPointer hinzeigt. hier also 45.  c hat jetzt den Wert 45


```
Ein einfaches Lernvideo ist das Video von Binky:
cslibrary.stanford.edu/104

* This is document 104 in the Stanford CS Education Library.
Please see http://cslibrary.stanford.edu/ for this and other
free educational materials.
&copy; Nick Parlante 1999.

Ein weitere Beispiel von Pointern:
```c
int x = 1, y = 2, z[10];
int* ip;      // Zeiger auf int
ip = &x;      // ip zeigt auf die Adresse von x
y = *ip;      // y bekommt den Inhalt von von der Speicherstelle wo ip drauf zeigt. in diesem falle von x = 1;
*ip = 0;      // x = 0;
ip = &z[0];   // ip zeigt neu auf z[0];
```

#### Arithmetik




#### Zeiger auf Strukturen



#### Zeiger auf Zeiger



#### Zusammenfassung


[Zurück](datatypes.md)

TODO

