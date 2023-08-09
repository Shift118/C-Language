#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);

	int x ;
	printf("Enter a your Grade: ");
	scanf("%d",&x);

	if (x >= 85) { printf("Excellent"); }
	else if (x >= 75) { printf("Very Good"); }
	else if (x >= 65) { printf("Good"); }
	else if (x >= 50) { printf("Pass");}
	else { printf("Fail"); }

}
