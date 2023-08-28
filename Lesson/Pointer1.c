#include <stdio.h>

int increment(int *a){
    *a++;
    printf("%d\n", *a);
}

int main(void) {
    int x =121;
    int *pointerofX = &x;
    printf("%d\n",*pointerofX);
    printf("%d\n",x);
    printf("%d\n",pointerofX);
    printf("%d\n",&x);
/////////////////////////////////////
    int arr[] = {2,3,4,5,6,7,8};
    
    increment(&arr[2]);
    
    printf("%d\n",arr[2]); 
}
