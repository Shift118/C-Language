#include <stdio.h>

int main(void){
	setbuf(stdout,NULL);

	int x , y , prime;
	printf("Enter a number: ");
	scanf("%d",&x);
	if (x < 0) {printf("Positive Only!");}
	else if (x == 1) { printf("Not Prime"); }
	else{
		for (int i = 2 ; i <= x ; i++){
			if (i != x){
				y = x/i;
				if(y*i == x){prime = 0; break;}
				else {prime = 1;}
			}
		}
		prime == 1 ? printf("Prime") : printf("Not Prime");
	}
}
