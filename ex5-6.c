#include <stdio.h>
main () {
	int score1, score2, score3;
	printf("1������ ������ �Է��ϼ��� : ");
	scanf("%d", &score1);
	printf("2������ ������ �Է��ϼ��� : ");
	scanf("%d", &score2);
	printf("3������ ������ �Է��ϼ��� : ");
	scanf("%d", &score3);
	if (score1 >= 60) {
		if (score2 >= 60) {
			if (score3 >= 60) 
				printf("�հ�\n");
			else 
				printf("���հ�\n");
		}
		else 
			printf("���հ�\n");
	}
	else 
		printf("���հ�\n");
	system("PAUSE");
}
