#include <stdio.h>
main () {
	int kor, mat, eng;
	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &kor);
	printf("수학 점수를 입력하세요 : ");
	scanf("%d", &mat);
	printf("영어 점수를 입력하세요 : ");
	scanf("%d", &eng);
	if ((kor >= 60) && (mat >= 60) && (eng >= 60)) 
		printf("합격\n");
	else 
		printf("불합격\n"); 
}
