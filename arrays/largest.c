#include<stdio.h>

int main(void){
    float num[100];
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
    }

    for(i=1; i<n; ++i){
        if(num[0]<num[i]){
            num[0]=num[i];
        }
    }
    printf("Largest number is %0.2f",num[0]);


}
