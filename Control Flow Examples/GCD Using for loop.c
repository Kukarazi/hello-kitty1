#include<stdio.h>

int main(void){
  int i,n,m,gcd;

  printf("Enter two positive integers : \n");
  scanf("%d%d", &n , &m);

  for(i = 1; i<=n && i <= m; ++i){
    if( n%1 == 0 && m%1 == 0){
      gcd = i;
    }
  }
  printf("The GCD is %d\n", gcd);
}
