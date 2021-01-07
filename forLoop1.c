#include <stdio.h>

int main (void)
{
    int k,j,n;
    
    printf("Enter positive integer: ");  // asking user to enter a number 
    scanf("%d", &n); // user inputs number 
    
    for(k=0; k<n; k++) // printing 'a' vertical    
        {
            for(j=0; j<n; j++) // printing 'a' in horizontal
                {
                    printf("%c",'a');
                }
            printf("\n");
        }
}
