#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);

	unsigned int x ;
	printf("Enter a positive number: ");
	scanf("%u",&x);

	int factorial = 1;
	if (x == 0){factorial = 1;}
	else{
		for (int i = x ; i > 0 ; i--){
			factorial *= i;
		}
	}
	printf("Factorial %u is %d",x,factorial);
}
