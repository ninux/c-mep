# Nicht-elementare Datentypen
---

#### Strukturen

* Ansammlung von Variablen von verschiedenen oder gleichen Datentypen in einer Bezeichung.
* Nützlich um komplizierte Daten zu organisieren
* Behandlung als eine Einheit.

Beispiel Adressverwaltungseintrag:

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


Zugriff auf die Komponente ("."-Operator):

      int age;
      age = newAdress.age; // Auf age zugreifen (34)
      char *surName;
      surName=strcpy(newAdress.surName); // Auf surName zugreifen (Max)

Zugriff mit Pointer auf die Struktur ("->"-Operator):

      struct adress *adressptr;
      adressptr = &newAdress;
      age = adressptr->age; // auf Age zugreifen
      surname = strcpy(adressptr->surName); // Surname zugreifen
      
Es ist möglich Strukturen zu verschachteln oder  über Pointer zu verlinken. Dieses Thema wird bei den Pointer behandelt.

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

TODO: Linked list link

      
#### Bitfelder
* Ganzzahlige Variabeln bestehend aus Bits
* Platzoptimierung von Strukturen
* Definition mittels ":"-Operator (Zahl dahinter Anzahl Bits)

      struct Datum{
            int iMonat : 4;
            int iTag : 5;
            int iJahr : 14;
            int iSommerzeit : 1;
      };
      
#### Aufzählungstypen/ Enumeratoren


#### Union






[Zurück](datatypes.md)

TODO
