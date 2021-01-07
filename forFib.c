#include <stdio.h>

int main (void)
{

    int i,k,j,t1 = 0, t2 = 1, nextNum;
    int n = 10;
    for(k=0; k<n; k++)
        {
            for(j=0; j<n; j++)
                {
                    printf("%d" , t1);
                    nextNum = t1 + t2;    // recursion
                    t1 = t2;
                    t2 = nextNum;
                }
            printf("\n");
        }


}



