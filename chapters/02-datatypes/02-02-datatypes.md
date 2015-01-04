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


#### Aufzählungstypen/Enumeratoren

* Folge von ganzzahligen Werten, mit 0 beginnend
* Wert kann auch explizit gesetzt werden, dies hat aber Auswirkungen auf die folgenden konstanten
* Variabeln eines enum Typs erlauben dem Compiler eine Typenüberprüfung

```c
enum Boolean { FALSCH, WAHR}; //Falsch hat Wert 0 und WAHR hat Wert 1

enum Farbe{
	ROT = 1,	 //Wert 1
	BLAU,	 //Wert 2
	GRUEN,
	GELB,	 //Wert 4
	WEISS = 10,//Wert 10
	SCHWARZ	 //Wert 11
};

enum Farbe meineFarbe = BLAU; //Variabelndeklaration für BLAU oder Wert 2
enum Farbe deineFarbe = 2;    //Variabelndeklaration für BLAU oder Wert 2
```

#### Typendefinition

* Definiert neue Datentypen
* Schlüsselwort  heisst typedef
* Ein bestehender Datentyp kann unbenannt werden.
```c
typedef unsigned char BYTE; // BYTE kann nun als Abkürzung für unsigned char verwendet werden.
```
* In Headerfiles kann typedef für eine plattformen unabhängigen Typendefinition verwendet werden. Da die Integerlänge unterschiedlich sein kann ([Siehe](02-01-datatypes.md)) ist es empfehlenswert Datentypen wie uint_16 oder uint_8 zu definieren.
```c
typedef unsigned short uint_16;
typedef unsigned char uint_8;
typedef unsigned long uint_32;
```

Weitere Beispiele:
```c
typedef char String[]; // Beispiel aus den Folien, wirft aber die Eine oder Andere Frage auf ;)
int strcpy(cons String from, String to);

//für enum
typedef enum MyBoolean_{
	FALSE,		//Wert 0
	TRUE
}MyBoolean_t;

MyBoolean_t meinBoolean = FALSE;
```



#### Union

* Mit einer Union kann eine Speicherstelle mit verschiedenen Datentypen angesprochen werden
* Motivation: Unabhängigkeit vom Datentyp z.B. Wert egal ob als long oder double eingefüllt.

```c
union u_tag{
	long	ival; //4 Byte
	double	dval; //8 Byte
	char	sval; //1 Byte
} u;
```
* Die Grösse wird durch die grösste Alternative bestimmt. Hier: sizeof(u) ist gleich sizeof(double) (8 Byte)
* Bytepositionen sind unbestimmt

Beispiel aus dem MC-Car:
```c
typedef union{
	uint8 buf[4];
	struct {
		uint16 adr;
		uint8 cmd;
		uint8 cmdN;
	} cmd;
} tCommand;
```
Dieses Beispiel zeigt den Buffer für das Einlesen eines Befehles von der IR-Ferbedienung.
Während dem Empfangen wird das buf-Array gefüllt.
Auf die einzelnen Daten wird dann wie folgt zugegriffen:

```c
tCommand rxCommand;
uint8 nextCmd;

nextCmd =  rxCommand.cmd.cmd;
```


[Zurück](datatypes.md)

TODO
