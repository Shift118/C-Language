#include <stdio.h>
#include <math.h>

void power(int num , int power){
	int value = pow(num,power);
	printf("Ans = %d",value);
}

int main(void){
	setbuf(stdout,NULL);
	int x,y;
	printf("Enter the value of Number: ");
	scanf("%d",&x);
	printf("Enter the value of Power: ");
	scanf("%d",&y);
	power(x,y);
}
