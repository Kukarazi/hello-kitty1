#include<stdio.h>

int main(void){

  int n;
  printf("Enter a simple integer: \n");
  scanf("%d", &n);

  if( n % 2 == 0){
    printf("Number %d is even\n", n);
  }
  else{
    printf("Number %d is odd\n", n);
  }
}
