#include <stdio.h>
main () {
	int a, b, c, d;
	a = 100;
	b = ++a;
	c = 200;
	d = c++;
	printf("전위형, a = %d\n", a);
	printf("전위형, b = %d\n", b);
	printf("후위형, c = %d\n", c);
	printf("후위형, d = %d\n", d);
}
