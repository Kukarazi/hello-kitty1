#include<stdio.h>
int main(void){

  int n,i,flag=0;

  printf("Enter a positive integer:\n");
  scanf("%d", &n);

  for( i = 2; i<= n/2; ++i){
    if( n % i == 0){
      printf("Number %d is non-prime\n", n);
      flag = 1;
      break;
    }
  }
    if ( flag == 0){
      printf("Number %d is prime: \n", n);
    }
  }
