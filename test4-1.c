#include <stdio.h>
main () {
	int a, b;
	float average;
	printf("입력 데이터 두 수는 : ");
	scanf("%d %d", &a, &b);
	average = ( (float)a + b ) / 2;
	printf("평균 = %f ", average);
}
