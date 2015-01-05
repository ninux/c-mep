# File-Zugriffe
---
[Zurück](../README.md)

### Programm

#### main.c
```c
#include <stdio.h>
#include <string.h>
#include "file.h"

int main(char argc, char** argv)
{
	char* file1;
	char* file2;
	char* text1;
	char* text2;

	file1 = "quotes.txt";
	file2 = "myquotes.txt";
	text1 = "Never trust a computer you can't throw out the window!\n";
	text2 = "C is quirky, flawed, and an enormous success!\n";

	print_file(file1);

	make_file(file2, text1);
	print_file(file2);

	append_file(file2, text2);
	print_file(file2);

	return 0;
}
```

#### file.h
```c
#ifndef FILE_H
#define FILE_H

#define READ "r"
#define WRITE "w"
#define APPEND "a"

void print_file(const char* filename);
void make_file(const char* filename, const char* text);
void append_file(const char* filename, const char* text);

#endif /* FILE_H */
```

#### file.c
```c
#include <stdio.h>
#include <string.h>
#include "file.h"

void print_file(const char* filename)
{
	char c;
	FILE* file;

	file = fopen(filename, READ);

	printf("%s:\n", filename);
	while ((c = fgetc(file)) != EOF) {
		printf("%c", c);
	}

	fclose(file);
}

void make_file(const char* filename, const char* text)
{
	char c;
	int i;
	FILE* file;

	file = fopen(filename, WRITE);

	for (i = 0; i < strlen(text); i++) {
		fputc(text[i], file);
	}

	fclose(file);
}

void append_file(const char* filename, const char* text)
{
	char c;
	int i;
	FILE* file;

	file = fopen(filename, APPEND);

	for (i = 0; i < strlen(text); i++) {
		fputc(text[i], file);
	}

	fclose(file);
}
```

### Ausgabe
```
quotes.txt:
If debugging is the process of removing software bugs, 
then programming must be the process of putting them in.
(Edsger W. Dijkstra)
myquotes.txt:
Never trust a computer you can't throw out the window!
myquotes.txt:
Never trust a computer you can't throw out the window!
C is quirky, flawed, and an enormous success!
```

### Dateien

#### quotes.txt
```
If debugging is the process of removing software bugs, 
then programming must be the process of putting them in.
(Edsger W. Dijkstra)
```

#### myquotes.txt
```
Never trust a computer you can't throw out the window!
C is quirky, flawed, and an enormous success!
```
