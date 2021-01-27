#include<stdio.h>

int main(void){

    float num[100],aver,sum=0.0;
    int n,i;
    printf("Enter quantity:\n");
    scanf("%d", &n);
    while(n<1 || n>100){
        printf("Enter integer from 1 to 100\n");
        scanf("%d", &n);
    }

    for(i=0; i<n; ++i){
        printf("Enter %d element\n",i+1);  
        scanf("%f", &num[i]);
        sum=sum+num[i];

    }
    aver=sum/n;
    printf("%f", aver);
}
