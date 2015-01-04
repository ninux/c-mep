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

Um mehr zur Zeigerarithmetik zu erfahren siehe [hier](chapters/02-datatypes/02-04-datatypes.md).

#### Matrix (zweidimensionales Array)


[Zurück](datatypes.md)

TODO
