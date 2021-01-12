#include <stdio.h>
int main(){
  long long n;
  int count = 0;
  printf("Enter a positive integer:\n");
  scanf("%lld", &n);

  while(n!=0){
    n = n / 10;
    ++count;
  }
  printf("The number of digits is %d\n", count);
}
