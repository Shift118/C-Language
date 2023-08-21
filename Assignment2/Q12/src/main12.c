#include <stdio.h>
#include <math.h>
/////

/////

int main(void) {
	setbuf(stdout, NULL);
	int temp;
	printf("Enter Temperature: ");
	scanf("%d", &temp);

	switch (temp) {
	case 0 ... 30:
		printf("required heating time = 7 mins.");
		break;
	case 31 ... 60:
		printf("required heating time = 5 mins.");
		break;
	case 61 ... 90:
		printf("required heating time = 3 mins.");
		break;
	case 91 ... 100:
		printf("required heating time = 1 mins.");
		break;
	default:
		if (temp > 100) {
			return 0;
		}
	}

}
