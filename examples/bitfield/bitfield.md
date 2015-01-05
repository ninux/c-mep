# Bit field
---
[Zurück](../README.md)

### Programm
```c
#include <stdio.h>
#include <stdlib.h>

struct time {
	unsigned int millisecond : 10;
	unsigned int second : 6;
	unsigned int minute : 6;
	unsigned int hour : 5;
};

struct time* set_time(int h, int min, int sec, int msec);
void print_time(const struct time* t);

int main(char argc, char** argv)
{
	struct time* daytime;

	daytime = set_time(16, 33, 54, 594);
	print_time(daytime);
	free(daytime);

	return 0;
}

struct time* set_time(int h, int min, int sec, int msec)
{
	struct time* t;

	t = (struct time*)malloc(sizeof(struct time));

	t->hour = h;
	t->minute = min;
	t->second = sec;
	t->millisecond = msec;

	return t;
}

void print_time(const struct time* t)
{
	int h, min, sec, msec = 0;

	h = t->hour;
	min = t->minute;
	sec = t->second;
	msec = t->millisecond;

	printf("time is %i:%i:%i:%i\n", h, min, sec, msec);
}
```
