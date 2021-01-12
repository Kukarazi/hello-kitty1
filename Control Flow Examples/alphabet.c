#include<stdio.h>
#include <ctype.h>
int main(void){

  char n;
  printf("Enter a character: \n");
  scanf("%c", &n);
  // using isalpha(). Returns positive integer if char is aplhabet and 0 if not.
  if(isalpha(n) == 0){
    printf("The character %c is not alphabet\n", n);
    }
  else{
    printf("The character %c is alphabet\n", n);
    }
}

