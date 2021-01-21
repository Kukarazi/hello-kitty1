#include<stdio.h>

int main(void){
    long long n,i,fac = 1;
    printf("Enter number: \n");
    scanf("%lld", &n);
    for(i = 1; i<=n; i++){
        fac = fac * i;   // n!=n*(n-1)! 

        /*     i++       i++       i++       i++
                |         |         |         |
          fac=1*1-->fac=1*2-->fac=2*3-->fac=6*4--> ...
        */

    }
    printf("%lld",fac);
}
