#include <stdio.h>
main () {
	int m, b, rest;
	int m500, m100, m50, m10, m1;
	printf("���ο� ���� ���� �׼� : ");
	scanf("%d", &m);
	printf("������ ���� �׼� : ");
	scanf("%d", &b);
	
	rest = b - m;
	m500 = rest / 500;
	m100 = (rest % 500) / 100;
	m50 = ((rest % 500) % 100) / 50; 
	m10 = (((rest % 500) % 100) % 50) / 10;
	m1 =  ((((rest % 500) % 100) % 50) % 10) / 1;
	
	printf("�Ž��� ���� ����?\n");
	printf("500�� : %d\n", m500);
	printf("100�� : %d\n", m100);
	printf("50�� : %d\n", m50);
	printf("10�� : %d\n", m10);
	printf("1�� : %d\n", m1);
}
