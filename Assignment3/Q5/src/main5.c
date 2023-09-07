#include <stdio.h>

int find(int x, int * list, int size);

int find(int x, int * list , int size){
	for (int i = 0; i < size ; i++){
		if (x  ==  list[i]){
			return i;
		}
	}
}


int main(void) {
	int numList[] = {6,5,4,3,2,2,2,1,1,1};
	int * pList = &numList[0];
	int x =3 ;
	find(x, pList , sizeof(numList)/sizeof(numList[0]));
}
