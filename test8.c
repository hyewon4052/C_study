#include <stdio.h> 
main () {
	int x,y,c,d,e,f;
	printf ("입력데이터 ? ");
	scanf ("%d %d\n", x, y);
	c = x+y;
	d = x-y;
	e = x*y;
	f = x/y;
	printf ("Add = %d\n",c);
	printf ("Subtract = %d\n",d);
	printf ("Multiply = %d\n",e);
	printf ("Divide = %d\n",f);
}
