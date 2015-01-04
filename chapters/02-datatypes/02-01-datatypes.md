# Elementare Datentypen
---
Typische Werte für x386:
* Ganzzahlig Datentypen können vorzeichenlos definiert werden.
    * z.B.: long li; // immer >=0
* in C90 gibt es keinen Datentyp Boolean! 0 -> falsch und 1 -> wahr
* Zusätzliche Datentypen in C99
      * long long: 64-Bit Ganzzahl (signed oder unsigned)
      * bool: Mit den Makrowerten true und false


| Name                   |      Bereich                |  Grösse in Byte              | Art    |
|:----------------------:|:---------------------------:|:----------------------------:|:------:|
|char                    |0..255                       | 1                            |Ganzzahl|
|(unsigned) short (int)  |0..65'535                    | 2                            |Ganzzahl|
|(unsigend) int          |0..4'294'967'295             | 4 (Prozessorregistergrösse)  |Ganzzahl|
|(unsigend) long (int)   |0..4'294'967'295             | 4                            |Ganzzahl|
|(signed) short (int)    |−32'768..32'767              | 2                            |Ganzzahl|
|(signed) int            |−2'147'483'648..2'147'483'647| 4 (Prozessorregistergrösse)  |Ganzzahl|
|(signed) long (int)     |-2'147'483'648..2'147'483'647|4                             |Ganzzahl|
|(signed) float          |...                          |4|Gleitkommazahl|
|(signed) double         |...                          |8|Gleitkommazahl|
|(signed) long double    |...                          |10|Gleitkommazahl|
|(unsigned) float        |...                          |4|Gleitkommazahl|
|(unsigned) double       |...                          |8|Gleitkommazahl|
|(unsigned) long double  |...                          |10|Gleitkommazahl|


[Zurück](datatypes.md)

TODO: Darstellung verbessern
