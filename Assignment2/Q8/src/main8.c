#include <stdio.h>

/////
int checkIfNotPrime(int num);
void checkIfPrime(int x, int y);
/////

void checkIfPrime(int x, int y) {
	for (int i = x + 1; i < y; i++) {
		if (checkIfNotPrime(i) == 0) {
			printf("\n %d", i);
		}
	}
}

int checkIfNotPrime(int num) {
	if (num == 2 || num == 3 || num == 5 || num == 7) {
		return 0;
	} else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0
			|| num == 1) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	setbuf(stdout, NULL);
	int x, y;
	printf("Enter First Number: ");
	scanf("%d", &x);
	printf("Enter Second Number: ");
	scanf("%d", &y);

	if (x > y) {
		printf("Error Second Number Must be Bigger Than First Number!");
		return 0;
	} else {
		printf("x= %d , y= %d", x, y);
		checkIfPrime(x, y);
		return 0;
	}
}
