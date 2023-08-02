#include <stdio.h>

int main(void){

	setbuf(stdout,NULL);

	int x,y,z,minNum;
	printf("Enter Three Numbers: ");
	scanf("%d%d%d",&x,&y,&z);

	if (x < y){minNum = x;}
	else {minNum = y;}
	if (minNum > z) {minNum = z;}

	printf("Smallest Number is %d\n",minNum);

}

