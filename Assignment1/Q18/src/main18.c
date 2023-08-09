#include <stdio.h>

int main(void){
	int stars_height = 5;
	for (int i = 1; i <= stars_height; i++){
		for (int h = 1; h <= i ; h++){
			printf("*");
		}
		printf("\n");
	}
}
