#include<stdio.h>

int main(void)
{
    int n,i,j;
    flag:
    printf("Enter quantity of numbers:\n");
    scanf("%d", &n);
    if(n<=0)
    {
        goto flag;
    }

    // entering values for first array;
    printf("Entering values for first row.\n\n");
    int arr1[n];
    for(i=0; i<n; ++i)
    {
        printf("Enter %d value:\n", i+1);
        scanf("%d", &arr1[i]);
    }
    // values for second row
    printf("Entering values for second row.\n\n");
    int arr2[n];
    for(j=0; j<n; ++j)
    {
        printf("Enter %d value:\n", j+1);
        scanf("%d", &arr2[j]);
    }
    // Doing addition and printing results
    int sum[100];
    printf("\nResult will be:");
    for(int k=0; k<n; k++){
        printf("%d ",sum[k]=arr1[k]+arr2[k]);

            }
}












