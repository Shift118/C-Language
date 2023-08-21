#include <stdio.h>
#include <math.h>
/////
int onesCount(unsigned int num);
/////

int onesCount(unsigned int num) {
	int count;
	while (num > 0) {
		if (num & 1) {
			count++;
		}
		num >>= 1; // Shifts right
		//11111101 => 01111110 => 00111111 => 00011111 => 00001111 => 00000111=> 00000011
		// 00000001 => 00000000 "This is where While Loop Stops"
	}
	return count;
}

int main(void) {
	unsigned int num = 0b11111101;
	int ones = onesCount(num);
	printf("Number of ones in %u is %d", num, ones);
}
