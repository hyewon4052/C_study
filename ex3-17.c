#include <stdio.h>
main () {
	char a;
	printf("입력문자: ");
	scanf ("%c", &a);
	printf("문자= %c\n",a);
	printf("character a = %5c\n",a);
	 char b[]= "";
	 printf("입력문자열: ");
	 scanf("%s", &b);
	 printf ("문자열 = %6s\n", b);
	 printf ("문자열 = %12s\n", b);
}
