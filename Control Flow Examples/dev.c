#include<stdio.h>
#include<math.h>


int main(void){

    float num[100],mean,sum,averVar=0.0,var,SD;
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

    //STEP I : Calculate "Mean";  (sum of all numbers\quantity)
    for(i=0;i<n;++i){
        sum=sum+num[i];
    }
    mean = sum/n;

    //STEP II : Calculate "Variance" (calculate each difference from mean then take each difference,square it and average the result)
    for(i=0; i<n; ++i){
        num[i] = num[i]-mean;
        num[i] = pow(num[i],2);
        averVar = averVar + num[i];
    }
    var = averVar/n;

    //STEP III: Calculate "Standart Deviation" (take the square root of "variance")
    SD=sqrt(var);
    printf("Standart deviation = %0.2f\n",SD);




}
