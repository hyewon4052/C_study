#include<stdio.h>

main(){
	printf("월 입력 : ");
	int month;
	scanf("%d", &month);
	switch(month){
		case 12: case 1: case 2: printf("겨울"); break;
		case 3: case 4: case 5: printf("봄"); break;
		case 6: case 7: case 8: printf("여름"); break;
		case 9: case 10: case 11: printf("가을"); break;
		default: printf("잘못 입력 "); 
	}
}
