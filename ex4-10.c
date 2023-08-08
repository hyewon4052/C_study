#include <stdio.h>
main () {
	int a, b, sum;
	a = 100;
	b = 200;
	printf("a = %d, b = %d\n", a,b);
	sum = ++b + a++;
	sum = b + ++a;
	printf("ÃÖÁ¾°ª a = %d, b = %d, sum = %d\n", a, b, sum);
}
