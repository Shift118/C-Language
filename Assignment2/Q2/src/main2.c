
#include <stdio.h>

void characterCheck(int c){
	for (int i = 65 ; i <=90 ; i++){
		if (c == i || c == i+32){
			printf("%c is an Alphabet",(char)c);
			return;
		}else{printf("%c is not an Alphabet",(char)c); return;}
	}
}

void characterCheck(int c);

int main(void){
	setbuf(stdout,NULL);
	char c;
	printf("Enter a Character: ");
	scanf("%c",&c);

	characterCheck(c);
}
