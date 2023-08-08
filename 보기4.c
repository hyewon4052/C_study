#include <stdio.h>
main() {
	int a,b,c;
	unsigned int d;
a = 100; 
b = 200;
c = 2147483647;
d = 4294967295; //¹üÀ§°ª 4,294,967,295
printf("%d %d %d\n",a,b,c);
printf("%d %d %d %u\n", a,b,c,d);
}
