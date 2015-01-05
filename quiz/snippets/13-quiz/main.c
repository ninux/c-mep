#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point addpoint(struct point p1, struct point p2);


int main(char argc, char** argv)
{
	struct point a;
	struct point b;
	struct point c;

	a.x = 1;
	a.y = 1;

	b.x = 2;
	b.y = 2;

	c = addpoint(a, b);

	printf("c.x = %i\n", c.x);
	printf("c.y = %i\n", c.y);

	return 0;
}

struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;

	return p1;
}
