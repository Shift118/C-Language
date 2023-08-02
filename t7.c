#include <stdio.h>

int main(void){

  int x,y;
  printf("Enter two Numbers: ");
  scanf("%d%d",&x,&y);

  if (x != y){
    printf("x isn't equal to y\n");
    if (x > y){
      printf("x > y\n");
    }else{printf("x < y\n");}
  }
  else{
     printf("x is equal to y\n");
  }
  printf("x = %d , y = %d",x,y);

}
