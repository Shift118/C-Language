#include <stdio.h>

int main(){
  double x = 9.3/3.0;
  if(x==3.1){
    printf("yes \n"); 
  }else {
      printf("NO\n");
   }
  printf("x = %lf \n",x);
}

// If used float rather than double the outcome is NO. Then why there is a difference even though it is still the same outcome x=3.10000.


