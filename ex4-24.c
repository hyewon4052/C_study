#include <stdio.h> 
main() {
 int a, b;
 printf("입력된 데이터 값은 = ");
 scanf("%d", &a); 
 b = a > 0 ? a + 50 : a + 100; 
 printf("a = %d, b = %d\n", a, b);
}
