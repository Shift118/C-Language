#include <stdio.h>

int main(void) {
	int eightbit[8];
	setbuf(stdout, NULL);

	for (int i = 0; i < 8; i++) {
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &eightbit[i]);
	}

	// Print the numbers using a for loop
	printf("Reverse: ");
	for (int i = 7; i >= 0; i--) {
		printf("%d", eightbit[i]);
	}
}
