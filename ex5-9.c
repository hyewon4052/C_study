#include <stdio.h>
main () {
	int score, pass;
	printf("점수를 입력하세요 : ");
	scanf("%d",&score);
	printf("점수를 입력하세요 : ");
	scanf("%d",&pass);
	if (score >= pass)
		printf("합격\n");
	else 
		printf("불합격\n");
}
