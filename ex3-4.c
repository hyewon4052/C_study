#include <stdio.h>
main() {
	int a, b, c, d;
	a = 1250;
	b = -345;
	c = 32000;
	d = -12;
	printf("* 데이터 1 * * * * * 데이터 2 *\n");
	printf("123456789012345678901234567890\n");
	printf("%-12d %14d\n", a, b); //전체 27 칸 
	printf("%-12d%14d\n", c, d);
}
