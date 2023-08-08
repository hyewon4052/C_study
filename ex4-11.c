#include <stdio.h>
main () {
	int a, b, sum;
	a = 100;
	b = 200;
	printf("기본값 a = %d, value b = %d\n", a, b);
	sum = b + ++a;
	printf("계산된 값a = %d, value b = %d, sum = %d\n",a, b, sum);
}
