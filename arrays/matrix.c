#include<stdio.h>

int main(void){

    int r,c,i,j;
    printf("Enter number of rows:\n");
    scanf("%d", &r);
    printf("Enter number of columns:\n");
    scanf("%d", &c);
    int a[r][c],b[r][c],sum[100][100];

    // for first matrix
    printf("\nEnter elements of first matrix:\n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("Enter a%d%d element:\n",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    //for second matrix
    printf("\nEnter elements of the second matrix:\n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("Enter a%d%d element:\n",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    // sum of matrices
    printf("\nThe sum of two matrices will be:\n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    //printing result
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("%d  ", sum[i][j]);
            if(j==c-1){
                printf("\n\n");
            }
        }
    }
}
