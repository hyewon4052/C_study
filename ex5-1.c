#include <stdio.h>
main () {
	int a;
	printf("�Էµ� �� = ");
	scanf("%d",&a);
	printf("%d %d\n",a, &a);
	if (a>0)
		printf("��� \n");	//���ٸ� ���� 
	else
	printf("���� \n");
}
