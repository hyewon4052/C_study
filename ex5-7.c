#include <stdio.h>
main () {
	int score;
	char level;
	printf("�Է°�: ");
	scanf("%d", &score);
	if (score >= 90) {
		level = 'A';
		printf("������ = %c\n", level);
	}
	else if (score >= 80) {
		level = 'B';
		printf("������ = %c\n", level);
	}
	else if (score >= 70) {
		level = 'C';
		printf("������ = %c\n", level);
	}
	else if (score >= 60) {
		level = 'D';
		printf("������ = %c\n", level);
	}
	else {
		level = 'F';
		printf("������ = %c\n", level);
	}
}
