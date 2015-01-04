#include <stdio.h>

typedef enum{
	ROT,
	BLAU = 5,
	GELB,
} Color_t;

int main(char argc, char** argv)
{
	Color_t my_color;
	Color_t your_color;

	printf("ROT = %i\n", ROT);
	printf("BLAU = %i\n", BLAU);
	printf("GELB = %i\n", GELB);

	my_color = BLAU;
	your_color = ROT;

	printf("My color is %i\n", my_color);
	printf("Your color is %i\n", your_color);

	return 0;
}
