#include<stdio.h>
int func(int a, int b){
int u, v, temp;
u=a; v=b;
while (v){
temp = u%v;
u=v;
v=temp;
}
return a*b/u;
}
main(){
int x, y, r=0;
scanf("%d %d", &x, &y);
r=func(x, y);
printf("%d", r);
}
