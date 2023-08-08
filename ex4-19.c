#include <stdio.h>
main () {
	int a;
	a = 031;
	printf("%6o\t %6o\t %6o\t %6o\n", a<<1, a<<2, a<<3, a<<5);
}
