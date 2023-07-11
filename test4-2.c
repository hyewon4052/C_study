#include <stdio.h>
main () {
	int m, b, rest;
	int m500, m100, m50, m10, m1;
	printf("쇼핑에 사용된 돈의 액수 : ");
	scanf("%d", &m);
	printf("지불한 돈의 액수 : ");
	scanf("%d", &b);
	
	rest = b - m;
	m500 = rest / 500;
	m100 = (rest % 500) / 100;
	m50 = ((rest % 500) % 100) / 50; 
	m10 = (((rest % 500) % 100) % 50) / 10;
	m1 =  ((((rest % 500) % 100) % 50) % 10) / 1;
	
	printf("거스름 돈의 개수?\n");
	printf("500원 : %d\n", m500);
	printf("100원 : %d\n", m100);
	printf("50원 : %d\n", m50);
	printf("10원 : %d\n", m10);
	printf("1원 : %d\n", m1);
}
