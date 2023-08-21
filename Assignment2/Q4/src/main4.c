#include <stdio.h>

int main(void) {
	setbuf(stdout, NULL);
	char option;
	float x, y;

	printf("Enter the First number which will be on Top: ");
	scanf("%f", &x);
	printf("Enter the Second number which will be on Bottom: ");
	scanf("%f", &y);
	printf("Enter the operation method (+,-,*,/) needed: ");
	scanf(" %c", &option); // Adding a space before %c
						   // This helped for the scanf not to assign the value of option as a newline
						   // Thus allow the user to assign its value himself.

	switch (option) {
	case '+':
		printf("x+y = %f", x + y);
		break;
	case '-':
		printf("x-y = %f", x - y);
		break;
	case '*':
		printf("x+y = %f", x * y);
		break;
	case '/':
		printf("x+y = %f", x / y);
		break;
	default:
		printf("Not a Supported Operation.");
		break;
	}

}
