#include <stdio.h>
#include <math.h>

int cube (int x){
	return pow(x,3);
}

int cube(int x);

int main(void){
	setbuf(stdout,NULL);
	int x;
	printf("Enter a Number: ");
	scanf("%d",&x);

	int cubic = cube(x);
	printf("Cube of %d is %d.",x,cubic);
}

