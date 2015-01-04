# Elementare Datentypen
---
Typische Werte für x386:
* Ganzzahlig Datentypen können vorzeichenlos definiert werden.
    * z.B.: unsigned long li; // immer >=0
* in C90 gibt es keinen Datentyp Boolean! 0 -> falsch und 1 -> wahr
* Zusätzliche Datentypen in C99
      * long long: 64-Bit Ganzzahl (signed oder unsigned)
      * bool: Mit den Makrowerten true und false


| Name        |      Unsigned    |Signed                       | Grösse in Byte               | Art    |
|:-----------:|:----------------:|:---------------------------:|:----------------------------:|:------:|
|char         |0..255            |  -128..127                  |1                             |Ganzzahl|
|short (int)  |0..65'535         |  −32'768..32'767            |2                             |Ganzzahl|
|int          |0..4'294'967'295  |−2'147'483'648..2'147'483'647|4 (Prozessorregistergrösse)   |Ganzzahl|
|long (int)   |0..4'294'967'295  |-2'147'483'648..2'147'483'647|4                             |Ganzzahl|
|float        |    -             |...                          |4                             |Gleitkommazahl|
|double       |    -             |...                          |8                             |Gleitkommazahl|
|long double  |    -             |...                          |10                            |Gleitkommazahl|



[Zurück](datatypes.md)


