# Nicht-elementare Datentypen
---

#### Strukturen

* Ansammlung von Variablen von verschiedenen oder gleichen Datentypen in einer Bezeichung.
* Nützlich um komplizierte Daten zu organisieren
* Behandlung als eine Einheit.

Beispiel Adressverwaltungseintrag:

```c
struct adress{ // adress ist das Etikett
	int adressnumber; //Inhalt sind Komponente
	char *name;
	char *surname;
	char *street;
	char *city;
	int  age;
};

	struct adress newAdress; //deklaration
	new Adress = {1, Max, Muster, Musterstrasse, Musterheim, 34}; //initialisierung
```

Zugriff auf die Komponente ("."-Operator):
```c
int age
age = newAdress.age; // Auf age zugreifen (34)
char *surName;
surName=strcpy(newAdress.surName); // Auf surName zugreifen (Max)
```

Zugriff mit Pointer auf die Struktur ("->"-Operator):

```c
struct adress *adressptr;
adressptr = &newAdress;
age = adressptr->age; // auf Age zugreifen
surname = strcpy(adressptr->surName); // Surname zugreifen
```      
Es ist möglich Strukturen zu verschachteln oder  über Pointer zu verlinken. Dieses Thema wird bei den Pointer behandelt.

```c
struct point{
	int x;
	int y;
	};
            
struct rect{
	struct point pt1;
	struct point pt2;
	};
      
struct rect screen;
      
screen.pt1.x=3; // X-Koordinate von pt1 ändern.
```
TODO: Linked list link

      
#### Bitfelder
* Ganzzahlige Variabeln bestehend aus Bits
* Platzoptimierung von Strukturen
* Definition mittels ":"-Operator (Zahl dahinter Anzahl Bits)
* Zugriff wie auf normale Struktur

```c
struct Datum{
	int iMonat : 4;
	int iTag : 5;
	int iJahr : 14;
	int iSommerzeit : 1;
};
```
|Komponente |mögliche Werte |benötigte Bits|
|:---------:|:-------------:|:------------:|
|iMonat     |1..12          |4             |
|iTag       |1..31          |5             |
|iJahr      |-10'000..10'000|14            |
|iSommerzeit|0 (nein), 1(ja)|1             |

Gesammt benötigter Speicherplatz: 24 Bits -> 3 Bytes
Benötigter Speicherplatz ohne Bitfelder: 16 Bytes


#### Aufzählungstypen/ Enumeratoren




#### Union






[Zurück](datatypes.md)

TODO
