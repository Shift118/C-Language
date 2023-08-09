#include <stdio.h>


int max(int x,int y){
	int max = x+y;
	return max;
}

//int max(int x,int y);

int main(void){
	int total = max(5,7);
	printf("%d",total);

}
