#include <stdio.h>

void main() {
  int x =5;
  float y;

  y = x/2;
  printf("%d\n",y);
  printf("%f\n",y);

  y = (float)x/2;
  printf("%d\n",y);
  printf("%f\n",y);

}
