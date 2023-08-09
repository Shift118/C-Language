#include <stdio.h>

int main(void){
	int stars_height = 1;
	for (int i = 5; i >= stars_height; i--){
		for (int h = 5; h >= i ; h--){
			printf("*");
		}
		printf("\n");
	}
}
