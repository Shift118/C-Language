#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//Func
bool stringCheck(int stringLen,char * string);
//

bool stringCheck(int stringLen,char * string){
	for (int i = 0; i < stringLen; i++){
		printf("%c: ",string[i]);
		for (int c = 0; c < stringLen; c++){
			if (i != c){
				printf("%d -> %c\n",c,string[c]);
				if(string[i] == string[c]){
					return false;
				}
			}
		}
	}
	return true;
}

int main(void) {
	setbuf(stdout,NULL);
	char stringIN[20];
	char * pStr = &stringIN[0];

	printf("Enter String Please: ");
	gets(stringIN);

	stringCheck(strlen(stringIN), pStr) ? printf("True"): printf("False");
}
