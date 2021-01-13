#include <stdio.h>
int main(void){
   int i,j,row,n = 0;
   printf("Enter number of rows: \n");
   scanf("%d", &row);

   for(i=1; i<=row; ++i){
      for(j=1; j<=i; ++j){
         printf("%d",j); 
      }
   printf("\n");
   }
}
