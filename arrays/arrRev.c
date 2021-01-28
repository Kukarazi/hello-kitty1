#include<stdio.h>

int main(void){


    int n,i;
    // user entering the quantity of elements
    scanf("%d", &n);
    int arr[n];

    //entering elements values
    for(i=0; i<n; ++i){
       scanf("%d", &arr[i]);
    }
    // doing reverse magiK
    for(i=n-1; i<=n && i>=0; --i){
        printf("%d ",arr[i]);
    }
}
