#include <stdio.h>
main()	{
	int x, y, z, a;
	x = 250; 	//10진수 
	y = 0250;	//8진수 
	z = 0x250;	//16진수 
	a = 21;
	printf("10진수 = %d, 8진수 = %o, 16진수 = %x\n", x, y, z);
	printf("10진수 = %d, 8진수 = %o, 16진수 = %x\n", x, x, z);
	printf("10진수 = %d, 8진수 = %o, 16진수 = %x\n", y, y, y);
	printf("10진수 = %d, 8진수 = %o, 16진수 = %x\n", z, z, z);
	printf("10진수 = %d, 8진수 = %o, 16진수 = %x\n", a, a, a);
}
