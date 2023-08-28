// Online C compiler to run C program online
#include <stdio.h>
#define N 10


int main(void) {
    // Write C code here
    int arr[N];
    int i,j;
    
    for (i= 0; i < 10 ; i++){
        arr[i]= i+100;
    }

    for (i= 0; i < 10 ; i++){
        printf("Element(%d) = %d\n",i+1,arr[i]);
    }    
}
