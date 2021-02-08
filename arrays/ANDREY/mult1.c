#include<stdio.h>

int main(void)
{
    int n,k,i,j,r=0,c=0;
    //
    flag1:
    printf("Enter rows&columns\n");
    scanf("%d", &n);
    if(n<=1)
    {
        goto flag1;
    }
    //
    flag2:
    printf("Enter multiplier\n");
    scanf("%d", &k);
    if(k<0)
    {
        goto flag2;
    }
    r=n;
    c=n;

    // entering values of matrix
    int arr[r][c];
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("Enter a%d%d value:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // multiplication
    int res[100][100];
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            res[i][j]=(arr[i][j] * k);
            printf("%d  ", res[i][j]);
                if(j==c-1)
                {
                    printf("\n\n");
                }
        }
    }
}
