#include <stdio.h>

float x,y;

void data(void){
	printf("Enter the value of x: ");
	scanf("%f",&x);
	printf("Enter the value of y: ");
	scanf("%f",&y);
}

int main(void){
	setbuf(stdout,NULL);

	char sign;
	printf("Enter the operation needed (+,-,*,/) : ");
	scanf("%c",&sign);

	switch (sign){
	case '+' : printf("Enter the variable for this order 'x+y' !\n");
	           data();
	           printf("x+y = %f",x+y);
	           break;
	case '-' : printf("Enter the variable for this order 'x-y' !\n");
			   data();
			   printf("x-y = %f",x-y);
			   break;
	case '*' : printf("Enter the variable for this order 'x*y' !\n");
	           data();
	           printf("x*y = %f",x*y);
	           break;
	case '/' : printf("Enter the variable for this order 'x/y' !\n");
			   data();
			   y == 0 ? printf("Infinity") : printf("x/y = %f",x/y);
			   break;
	default : printf("This is not a feature!");
			  break;
	}
}


