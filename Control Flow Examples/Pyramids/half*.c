#include <stdio.h>
int main(void){
   int n,i,j;
   printf("Enter number of rows: \n");
   scanf("%d", &n);
   
   for(i=1; i<=n; ++i){ // vertical rows №
      for(j=1; j<=i; ++j){  //  Horizontal( content ) 
         printf("*");
      }
   printf("\n");
   }
}
