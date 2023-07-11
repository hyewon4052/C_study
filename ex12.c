#include <stdio.h>
main () {
	int x,y,a,b,c;
	printf("1번째수: ");
	scanf ("%d", &x);
	printf ("2번째 수: ");
	scanf ("%d", &y);
	a=x+y;
	b=x-y;
	c=x*y; 
	printf("합= %d\n", a); 
	printf("빼기= %d\n", b);
	printf("곱하기= %d\n", c);
}
