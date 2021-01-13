#include <stdio.h>
int main(void){
   int x,y;
   char op;
   printf("Enter operator('+' , '-' , '/' , '*') : ");
   scanf("%c", &op);
   printf("Enter first operand: ");
   scanf("%d", &x);
   printf("Enter second operand: ");
   scanf("%d",&y);

   switch(op)
   {
      case '+':
         printf("%d+%d=%d\n",x,y,x+y);
         break;

      case '-':
         printf("%d-%d=%d\n",x,y,x-y);
         break;

      case '/':
         printf("%d/%d=%d\n",x,y,x/y);
         break;

      case '*':
         printf("%d*%d=%d\n",x,y,x*y);
         break;

      default:
         printf("Operator is not correct.\n");

   }

}
