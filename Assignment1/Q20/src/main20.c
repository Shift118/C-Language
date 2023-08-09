#include <stdio.h>

int main(void){
	int pyramid_height = 5;

	for (int i = 1 ; i < pyramid_height*2 ; i+=2 ){

		int spaceing = (i-9)/(-2);
		for (int s = 0; s <= spaceing; s++){
			printf(" ");
		}
		for (int h = 1; h <= i ; h++){
			printf("*");
		}
		printf("\n");
	}


}
