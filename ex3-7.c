#include <stdio.h>
main () {
	int a = 30;
	float b = 3.1415;
	char c = 'A';
	char d[6] = {'K', 'O', 'R', 'E', 'A','\0'};
	char e[6] = {"KOREA"};
	printf("%d %.2f %c %s\n", a,b,c,d);
	printf("%c\n", d[2]);
	printf("%c\n", e[3]);j
}
