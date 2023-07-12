#include <stdio.h>
main () {
	int a, b, c;
	printf("입력 값 = ");
	scanf("%d", &a);
	if (a>0)
		printf("a = %d (양수 또는 0) ---> a * 10 = %d\n",a, a*10);
	//printf("01234567890");
	else 
		printf("a = %d (음수) ---> a * 20 = %d\n",a,a*20);
	//printf("01234567890");
}
