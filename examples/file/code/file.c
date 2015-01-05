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
