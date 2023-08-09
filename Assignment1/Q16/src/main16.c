#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);
	double x;
	printf("Enter a Number: ");
	scanf("%lf",&x);
	printf("Inverse is %lf", 1/x);
}
