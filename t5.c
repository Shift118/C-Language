#include <stdio.h>

void main(void){
  int i = 10;
  int x =30;

  if (i++ && (x>40)){}  //If the conditions where other way around x would have been equal 10 because the (x>40) would instantly stop the if function because it is false already.

  printf("i= %d\n",i);
}
