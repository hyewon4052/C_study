#include <stdio.h> 
main () {
	int a, b, c, d, e, f, g;
	a = 40, b = 50;
	c = a > b;
	printf("checking value c = %d\n",c);
	d = a >= b;
	printf("checking value c = %d\n",d);
	e = a < b;
	printf("checking value c = %d\n",e);
	f = a <= b;
	printf("checking value c = %d\n",f);
	g = a <= b;
	printf("checking value c = %d\n",g);
}
