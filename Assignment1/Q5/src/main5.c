#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);
	printf("Enter a Character: ");
	char c;
	scanf("%c",&c);

	printf("Character '%c' in ASCI is %d.",c,c);
}
