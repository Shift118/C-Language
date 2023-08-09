#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);
	float x,y;
	printf("Enter 2 Number: ");
	scanf("%f%f",&x,&y);
	printf("The Answer is %f\n",((x+y)*3)-10);
}
