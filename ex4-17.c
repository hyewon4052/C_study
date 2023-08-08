#include <stdio.h>
main () {
	int a, b, c, d, e;
	a = 1, b = 0;
	c = a && b;
	printf("AND c = %d\n", c);
	d = a || b;
	printf("AND d = %d\n", d);
	e = !a;
	printf("AND e = %d\n", e);
}
