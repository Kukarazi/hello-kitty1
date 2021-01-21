#include<stdio.h>

int main(void){

    int n,i,res;
    printf("Enter number:\n");
    scanf("%d",&n);
    for( i=1; i<=10; i++){
        res = n*i;
        printf("%d*%d=%d\n",n,i,res);
    }
}
