#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);
	float r;
	printf("Enter Circle Radius in meters: ");
	scanf("%f",&r);

	float area = (22/7)*r*r;
	float per = 2*(22/7)*r;
	printf("Radius: %f m\nArea: %f m\nPerimeter: %f m.",r,area,per);
}
