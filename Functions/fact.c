#include<stdio.h>

int fac(int n);

int main(void){

   int n,result;
   scanf("%d", &n);
   result = fac(n);
   printf("%d", result);
}

int fac(int n){
   if(n!=1){
      return n * fac(n-1);    // recursion. | n=5;   n*fac(4)-->n*fac(3)-->n*fac(2)-->n*fac(1) 
   }else{
      return n;
   }
}
