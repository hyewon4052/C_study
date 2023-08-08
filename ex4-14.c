#include <stdio.h> 
main () {
	int a, b, sum;
	a = 10, b = 20, sum =30;
	printf("a = %d, b = %d\n",a, b);
	sum += b * --a;
	printf("ÃÖÁ¾°ªa = %d, value b = %d, sum = %d\n", a, b, sum);
}
