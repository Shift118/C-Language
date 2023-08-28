#include <stdio.h>

int increment(int a){
    a++;
    return a;
}


int main(void) {
    // Write C code here
    int i , arr[] = {2,3,4,5,6,7,8};
    
    printf("Size of Array = %d\n",sizeof(arr)/sizeof(arr[0]));
    // Printing all Using LOOP
    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d\n",increment(arr[i]));
    }
}
