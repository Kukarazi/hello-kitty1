// Reversing a sentence using recursion // 



#include<stdio.h>

void reverse(void);
int main(void)
{
    printf("Enter a sentence: \n");
    reverse();
}

void reverse()
{
    char c;
    scanf("%c", &c);
    if(c != '\n')
    {
        reverse();
        printf("%c", c);
    }
}
