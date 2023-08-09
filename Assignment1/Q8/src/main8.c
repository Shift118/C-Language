#include <stdio.h>
#include <math.h>

int main(void){
	setbuf(stdout,NULL);

	unsigned int x ;
	printf("Enter a positive number: ");
	scanf("%u",&x);
	int squareNum = sqrt(x);

	squareNum * squareNum == x ? printf("This is Perfect Square.") : printf("This isn't Perfect Square.");

}
