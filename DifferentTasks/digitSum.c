#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a,b,c,d,e;
    scanf("%c%c%c%c%c", &a,&b,&c,&d,&e);
    

    printf("%d\n" , (a-48) + (b-48) + (c-48) + (d-48) + (e-48) );   // Using ASCII table,to invert numbers from char.

    return 0;
}
