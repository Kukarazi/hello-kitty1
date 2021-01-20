#include<stdio.h>
// n==year;
// not leap: n%100==0;
// Leap year: n%4==0;
// Century leap year( 00 ending ): n%400==0;
int main(void){
    int n;
    printf("Enter year:\n");
    scanf("%d", &n);

    if(n%400==0){
        printf("%d is leap year\n",n);
    }else if(n%100==0){
        printf("%d is not a leap year\n",n);
        }else if(n%4==0){
            printf("%d is leap year\n", n);
        }else{
            printf("%d is not a leap year\n",n);
        }
    }

