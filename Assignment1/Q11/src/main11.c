#include <stdio.h>

int main(void){
	int y = 0;
	for(int x = 0; x <= 100 ; x++){
		printf("%d\n",x);
		y+=x;
		printf("%d\n",y);
	}
}
