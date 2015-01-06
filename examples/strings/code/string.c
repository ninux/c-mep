#include <stdio.h>
#include <string.h>

int print_string(char* string)
{
	int i;
	char c;

	i = 0;

	while ((c = *(string+i)) != '\0') {
		printf("%c", c);
		i++;
	}

	return 0;
}
