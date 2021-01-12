#include <stdio.h>
#include <math.h>
int main(){
  int n,remainder,originalN,revN = 0;

  printf("Enter integer. Palindrome or not.\n");
  scanf("%d", &n);
  originalN = n;

  while( n!=0){
  remainder = n%10;
  revN = revN * 10 + remainder;
  n = n / 10;
  }
  if(revN == originalN){
    printf("Number %d is palindrome\n", originalN); 
  }
  else{
    printf("Number %d is not palindrome\n", revN);
  }

}
