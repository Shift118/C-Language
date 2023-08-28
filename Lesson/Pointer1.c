#include <stdio.h>

int main(void) {
    int x =121;
    int *pointerofX = &x;
    printf("%d\n",*pointerofX);
    printf("%d\n",x);
    printf("%d\n",pointerofX);
    printf("%d\n",&x);
}
