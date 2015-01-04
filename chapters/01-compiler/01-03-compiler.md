# Linker
---
* Der Linker erstellt das ausführbare Programm Objektcode und die dazugehörigen Bibliotheken    
werden zu einem ausführbaren Programm verlinkt.
* Der Linker wandelt die symbolischen Adressen von Funktionen und Variabeln eines Programmmoduls in Speicheradressen um. So kann das gewünschte Modul in einem anderen Programm verwendet werden.
* Der Linker-vorgang findet nach der Kompilierung statt und ist meisst der letzte Arbeitsschritt.

* Statisches Linken beschreibt den Linkvorgang nach dem Kompilieren und wird vor der Programmausführung erledigt. Als Ergebniss erhält man ein vollständig gelinktes Programm aus einer einzigen Datei.
    * Vorteil: Höhere Portabilität -> nicht auf bereitstellung von Programmmodulen angewiesen.
    * Nachteil: Höherer Speicherbedarf, da einzelnen Programmmodule nicht mit anderern Programmen geteilt werden können.
    * Nachteil: Falls ein Teilmodul verändert wurde, ist es notwendig die ganze Anwendung neu zu kompilieren.
* Dynamisches Linken beschreibt den Linkvorgang der erst ausgeführt wird, wenn das Programm tatsächlich ausgeführt wird. Die einzelnen Module werden bei ausführen des Programms geladen und gelinkt. Diese können je nach Betriebssystem durch vollständig dynamische Biblitheken bereitgestellt werden.
    *  Vorteil: Einzelene Module können einfach ausgetauscht werden, ohnen das ganze Programm neu zu kompilieren.
    *  Vorteil: Potentiel weniger Speicherbedarf, da Moudle geteilt werden können.
    *  Nachteil: Schlechtere Portabilität, da die richtigen Bibliotheken und Module in der Richtigen Version vom Betriebssystem bereitgestellt werden müssen.
 
Im Normalfall wird eine Mischform der statischen und dynamischen Link-Art verwendet. Dabei werden gewisse Unterprogramme dem aufrufenden Programm statisch hinzugebunden, andere werden dynamisch nachgeladen.


[Zurück](compiler.md)

