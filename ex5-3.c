#include <stdio.h>
main () {
	int a, b, c, d;
	printf("ÀÔ·Â °ª = ");
	scanf("%d", &a);
	if (a>0) {
	b = a + 10;
	c = a + a * b;
	printf("a = %d b = %d c = %d", a,b,c);
	}
	d = a - 20;
	printf("d = %d \n", d);
}
