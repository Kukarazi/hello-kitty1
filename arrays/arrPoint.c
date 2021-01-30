#include<stdio.h>

int main (void){

    int data[5],i;
    // filling array with values
    for(i=0; i<5; ++i){
        printf("Print %i element of array\n", (i+1) );
        scanf("%i", &data[i]);
    }
    printf("\n\n");  // just for visualization
    // acessing values using pointers
    for(i=0; i<5; ++i){
        printf("Array element data[%i] is %i\n", i,*(data+i));
    }
}
