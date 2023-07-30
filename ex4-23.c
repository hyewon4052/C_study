#include <stdio.h>
main () {
	int a, c, x,z;
	a = 195, x = 227;
	c = ~a;
	z = ~x;
	printf("~%d = %d\n", a, c);
	printf("~%d = %d\n", x, z);
}
