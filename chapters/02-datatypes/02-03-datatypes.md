# n-dimensionale Arrays
---

#### Vektor (eindimensionales Array)

Das Konstrukt
```c
Datentyp Vaiablenname[Groesse];
int ia[10];
```
erzeugt einen Vektor auf dem Stack.
```c
int values[] = {23, 45, 56, 8, 9 };
```
erzeugt automatisch einen genug grossen Vektor
Beispiel zur Verwendung eines Vektors:
 ```c
int main(int argc, char** argv) {
    
 char myString[] = "Hallo Welt!";
 
 char letter;
 letter = myString[3]; // 3. Element aus myString wird in letter kopiert. (l)
 
 char secondLetter;
 secondLetter = *(myString + 1); //  Zugriff mittels Pointerarithmetik auf das zweite Element
 
 printf("first: %c second: %c",letter,secondLetter);

    return (EXIT_SUCCESS);
}
```

Um mehr zur Zeigerarithmetik zu erfahren siehe [hier](02-04-datatypes.md).

#### Matrix (zweidimensionales Array)

Eine Matrix ist ein Array mit n Feldern, welches in jedem Feld mit einem weiteren Array mit n Feldern gefüllt ist.   
Zum Beispiel ein Array mit der Länge 4 Felder ist in jedem Feld mit einem Array von 5 Feldern gefüllt. Dies ergibt eine Matrix von 5x5 Feldern.
```c
char a[4][5]= {
{0, 1, 2, 3, 4},       //erste Spalte
{5, 6, 7, 8, 9},       //zweite Spalte
{10, 11, 12, 13, 14},  //dritte Spalte
{15, 16, 17, 18, 19}   //vierte Spalte
};

int x, y, z;

x = a[0][0]; //erste Spalte erste Zeile auslesen
y = a[2][4]; //dritte Spalte fünfte Zeile auslesen
z = a[3][4]; //vierte Spalte fünfte Zeile auslesen
```


[Zurück](datatypes.md)

TODO
