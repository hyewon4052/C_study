#include <stdio.h>
main () {
//	int a[3][5];
//	float ave[3];
//	int i, j;
//	
//	for (i = 0; i < 3; i++) {
//		printf("�л� ��ȣ : " );
//		scanf("%d", &a[i][0]);
//		for (j = 1; j < 4; j++) {
//			printf("���� �Է� : ");
//			scanf("%d", &a[i][j]); 
//		} 
//	}
//	
//	for(i = 0; i < 3; i++){
//		a[i][4] = a[i][1] + a[i][2] + a[i][3];
//		ave[i] = (float)a[i][4] / 3.0; 
//	}
//	
//	printf("=========���� ����========== \n");
//	printf("           kor  eng  mat  tot  ave \n");
//	printf("============== \n");
//	for (i = 0; i < 3; i++ ) {
//		printf("no. %2d  %5d %5d %5d %5d %.2f \n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], ave[i]);
//	} 
//	printf("===============\n");

	
	
	
	int a[3][5];
	float ave[3];
	int i,j;
	
	for(i = 0; i < 3; i++) {
		printf("��ȣ �Է� : ");
		scanf("%d", &a[i][0]);
		for(j = 1; j < 4 ; j++) {
			printf("���� �Է� : ");
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0 ; i < 3 ; i++){
		a[i][4] = a[i][1] + a[i][2] + a[i][3];
		ave[i] = (float)a[i][4] / 3.0;
	}
	
	printf("=============== ���� ���� ���α׷� =============== \n");
	printf("        kor eng mat tot ave \n");
	for (i = 0; i < 3; i++ ){
		printf("no.%2d %5d %5d %5d %5d %.2f \n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], ave[i] );
	} 
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
