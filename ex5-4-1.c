#include <stdio.h>
main () {
	int a,b;
	printf("받은 점수 = ");
	scanf("%d",&a);
	printf("합격점 = ");
	scanf("%d",&b);	
	
	if (a > b) {
		printf("합격\n");
		printf("참잘했어요");
	}
	else {
		printf("불합격\n");
		printf("좀 더 노력하세요.");
	}
}
