#include <stdio.h>
main () {
	int kor, mat, eng;
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &mat);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &eng);
	if ((kor >= 60) && (mat >= 60) && (eng >= 60)) 
		printf("�հ�\n");
	else 
		printf("���հ�\n"); 
}
