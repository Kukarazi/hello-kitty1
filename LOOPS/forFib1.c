#include <stdio.h>

int main (void)
{

    int n,j,t1 = 0, t2 = 1, nextNum;

    printf("Enter positive index number: ");  // asking user to enter a number 

    scanf("%d", &n);   

    for(j=0; j<n; j++)
        {
            nextNum = t1 + t2;
            t1 = t2;
            t2 = nextNum;
        }
    printf("%d\n" , t1); 
}



