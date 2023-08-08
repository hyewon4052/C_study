#include <stdio.h>
main () {
	float f;
	printf("실수값 입력: ");
	scanf ("%f", &f);
	printf ("f = %.2f\n", f); 
	printf ("f = %8.3f\n", f);
	printf ("f = %12.1f\n", f);
}
