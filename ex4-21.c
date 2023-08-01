#include <stdio.h>
main () {
	int a, b, c, x, y, z;
	a = 195, b = 15, x = 227, y =63;
	c = a|b;
	z = x|y;
	printf("%d & %d = %d\n", a, b, c);
	printf("%d & %d = %d\n", x, y, z);	
}
