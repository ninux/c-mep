# Union
---
[Zurück](../README.md)

### Programm
```c
#include <stdio.h>

union value {
	char c_value;
	short s_value;
	int i_value;
	long d_value;
}v;

int main(char argc, char** argv)
{
	char test;
	union value a;
	union value b;

	b.c_value = a.c_value;
	b.s_value = a.s_value;
	b.i_value = a.i_value;
	b.d_value = a.d_value;

	printf("Creating two identical unions a and b\n");

	test = 120;
	a.c_value = test;
	b.d_value = test;

	printf("Saving %i into char variant of union a results in\n", test);
	printf("\ta.c_value = %i\n", a.c_value);
	printf("\ta.s_value = %i\n", a.s_value);
	printf("\ta.i_value = %i\n", a.i_value);
	printf("\ta.d_value = %i\n", a.d_value);

	printf("Saving %i into long variant of union b results in\n", test);
	printf("\tb.c_value = %i\n", b.c_value);
	printf("\tb.s_value = %i\n", b.s_value);
	printf("\tb.i_value = %i\n", b.i_value);
	printf("\tb.d_value = %i\n", b.d_value);

	return 0;
}
```

### Ausgabe
```
Creating two identical unions a and b
Saving 120 into char variant of union a results in
	a.c_value = 120
	a.s_value = -22664
	a.i_value = -981686408
	a.d_value = -981686408
Saving 120 into long variant of union b results in
	b.c_value = 120
	b.s_value = 120
	b.i_value = 120
	b.d_value = 120
```
