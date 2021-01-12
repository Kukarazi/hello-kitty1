#include <stdio.h>
#include <math.h>
int main(){

  int x,y,result; // x will be base number. y will be exponent.

  printf("Enter a positive integer: \n");
  scanf("%d", &x);
  printf("Now enter an exponent: \n");
  scanf("%d", &y);

  result = (pow(x,y));

  printf("The result will be %d\n", result);

    return 0;
}
