#include <stdio.h> 
main () {
	int a, b, c;
	a = 15;
	b = a >> 2;
	c = a << 2;
	printf("%d >> 2 = %d\n",a,b);
	printf("%d << 2 = %d\n",a,c);
}
