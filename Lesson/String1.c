#include <stdio.h>

int main(void) {
    char str1[] = {'F','Y','\0'};
    char str2[10];
    char str3[10];
// Printing
    printf("%s\n",str1); // FY
    puts(str1); // FY no need to add \n
// Scan Input
        // scanf("%s",str2);
        // printf("str2 = %s\n",str2);
    gets(str3); //scanf with gets makes it unfunctional !!!!
    // Gets takes all the user input till the new line.
    // but scanf will take input before space between words.
    printf("str3 = %s\n",str3);
}
