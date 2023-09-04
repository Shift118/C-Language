#include <stdio.h>
//Func
int summation(int numbers_size, int* numbers);
//

int summation(int numbers_size, int* numbers){
	int sum = 0;
	for (int i = 0; i < numbers_size; i++){
		printf("Number[%d] = %d\n",i+1,numbers[i]);
		sum += numbers[i];
	}
	return sum;
}

int main(void) {

	int numList[] = {3,6,9,12};
	int *numPTR = &numList[0];
	printf("Summation = %d",summation(sizeof(numList)/sizeof(numList[0]), numPTR));

}
