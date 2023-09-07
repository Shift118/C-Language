#include <stdio.h>
//Func
void bubbleSort (int * array , int size);
//

void bubbleSort (int * array , int size){
	int sorting = 1;
	int change = 0;
	while (sorting == 1){
		for (int i = 0; i< size-1 ; i++){
			if (array[i] > array[i+1]){
				change += 1;
				// Swap Process
				int x = array[i];
				array[i] = array[i+1];
				array[i+1] = x;
				//
			}
		}
		(change == 0) ? (sorting = 0) : (change = 0);
	}
	for (int i = 0; i< size ; i++){
		printf("%d ",array[i]);
	}
}

int main(void) {
	int array[] = {9,5,1,8,3,2,7,4,6};
	int * pArray = &array[0];


	bubbleSort(pArray, sizeof(array)/sizeof(array[0]));

}
