#include <stdio.h>
main () {
short a, b, c;
unsigned short d;
a = 12345;
b = 32767;
c = 32768;
d = 65535;
printf("%d %d %d\n",a,b,c);
printf("%d %d %d %u\n", a,b,c,d);
}
