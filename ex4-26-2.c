#include <stdio.h>
main () {
	int a, b, c;
	a = 10, b = 20;
	c = (a += 1, b += a, a*b);
	printf("a = %d, b = %d, ����� c = %d\n", a, b, c);
	getch();
}
