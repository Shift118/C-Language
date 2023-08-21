#include <stdio.h>

void sign(float number){
	if (number > 0){printf("%f is Positive Number",number);}
	else if (number < 0){printf("%f is Negative Number",number);}
	else if (number == 0){printf("%f is neither a Negative or a Positive Number",number);}
}

void sign(float number);

int main(void){
	setbuf(stdout,NULL);
	float number;

	printf("Enter a Number: ");
	scanf("%f",&number);

	sign(number);

}
