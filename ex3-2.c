#include <stdio.h>
main() 	{
	short a;
	unsigned short b;
	short c;
	unsigned int d;
	a = 32768;
	b = 32790;
	c = -32769;
	d = 31474836848;
	printf("a = %d\n", a);
	printf("b = %u\n", b);
	printf("c = %d\n", c);
	printf("d = %u\n", d);
}
