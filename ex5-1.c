#include <stdio.h>
main () {
	int a;
	printf("입력된 값 = ");
	scanf("%d",&a);
	printf("%d %d\n",a, &a);
	if (a>0)
		printf("양수 \n");	//한줄만 실행 
	else
	printf("음수 \n");
}
