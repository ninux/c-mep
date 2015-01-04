#include <stdio.h>

int main(char argv, char** argc)
{
	int i, limit = 100;
	char c;
	char s[100];

	for (i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}

	s[i] = '\0';

	printf("Your input was: \"%s\"\n", s);

	return 0;
}
