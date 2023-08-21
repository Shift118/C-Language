// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>

int main() {
	int j = 0;
	char str[] = "Mostafa Younes";
	char ch;

	while (str[j]) {
		ch = str[j];
		putchar(toupper(ch));
		j++;
	}

	return 0;
}
