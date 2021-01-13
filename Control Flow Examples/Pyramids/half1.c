#include <stdio.h>
int main(void){
  int i,j,n;
  printf("Enter number of rows\n");
  scanf("%d", &n);

  for(i=n; i>=1; --i){  // from 5 '*' to -1 each row
     for(j=1; j<=i; ++j){
        printf("*");
     }
    printf("\n");
  }
}
