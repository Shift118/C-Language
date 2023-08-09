#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);
	printf("Enter The Temperature In Celsius: ");
	float c;
	scanf("%f",&c);

	float f = c * (9/5) +32;
	printf("Temperature in Celsius = %f is Equal to %f in Fahrenheit.",c,f);
}
