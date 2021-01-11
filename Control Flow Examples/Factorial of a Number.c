#include<stdio.h>

int main(void){

  int i,n;
  unsigned long long fac = 1;  // factorials are big.
  scanf("%d", &n);

  for( i = 1; i<=n; i++){   // starting from 1,counting to 'n'/ step ++
    fac = fac * i;     // fac by default is '1', that's means every new step we will be multiplying by new integer.

  }
  printf("Factorial of %d is %llu", n , fac);
}
