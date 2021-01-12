#include<stdio.h>

int main(void){

  int a,b,c;  // a=1  b = 5 c =10
  printf("Enter three integers:\n");
  scanf("%d%d%d", &a,&b,&c);

  if(a>b && a>c){
    printf("%d is the biggest", a);
  }
  else if(b>a && b>c){
    printf("%d is the biggest", b);
  }
  else{
    printf("%d is the biggest", c);
  }

}
