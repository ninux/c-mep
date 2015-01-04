#include <stdio.h>

void xxx(char* to, const char* from);

int main(char argc, char** argv)
{
	char* a;
	char* b;

	a = "Hello World!";
	xxx(b, a);

	printf("%s\n", b);

	return 0;
}

void xxx(char* to, const char* from)
{
	int i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
