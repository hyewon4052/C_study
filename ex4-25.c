#include <stdio.h> 
main() {
 int a;
 printf("입력할 정수값은 = ");
 scanf("%d", &a);
 a > 0 ? printf("양수\n") :
 a < 0 ? printf("음수\n") : printf("Zero\n");
}
