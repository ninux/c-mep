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
