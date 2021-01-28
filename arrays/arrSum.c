#include<stdio.h>

int main(void){


    int n,i;
    printf("Enter quantity of elements:\n");
    scanf("%d", &n);
    int arr[n];

    //entering elements values
    for(i=0; i<n; ++i){
        printf("Enter %d element:\n",i+1);
        scanf("%d", &arr[i]);
    }

    // doing actual math in array
    for(i=1; i<n; ++i){
        arr[0] = arr[0]+arr[i];
    }
    printf("The sum of all elemnts in array will be:%d\n",arr[0]);
}
