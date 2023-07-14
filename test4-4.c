#include <stdio.h>
main () {
int a, b, c;
printf("a와 b를 입력하시오 : ");
scanf("%d %d", &a, &b);
c = (a > b) ? a : b*b;
printf("a = %d\n", a);
printf("b = %d\n", b);
printf("c = %d", c);
}
