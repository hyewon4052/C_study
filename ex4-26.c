#include <stdio.h> 
main() {
int a, b, c, d, temp, max, t2;
printf(" 입력한 4개의 수 = ");
scanf("%d %d %d %d", &a, &b, &c, &d);
temp = a > b ? a : b;
t2 = temp > c ? temp : t2 ;
max = t2 > d ? t2 : d;
printf("최대값 = %d\n", max);
}
