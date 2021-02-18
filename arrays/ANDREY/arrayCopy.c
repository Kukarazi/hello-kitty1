

#include<stdio.h>
#include<stdlib.h>

int* arrayFill(int *arr, int n)  // Filling first array with elements. 
{
    for(int i = 0; i<n; i++)
    {
        printf("Enter element №%d\n", i+1);
        scanf("%i", &arr[i]);
    }
    return arr;
}

void arrayCopy(int *arr, int *arr2, int n) // Copying elements from first array to second
{

    for(int i = 0; i<n; i++)
    {
        arr2[i] = arr[i];
    }

}

void arrayPrint(int *arr2, int n) // Printing elements of the second(copied) array. 
{
    for(int i = 0; i<n; i++)
    {
        printf("%d element of array = %d\n", i+1, arr2[i]);
    }
}


int main(void)
{
    int n;
    printf("Enter amount of elements:\n");
    scanf("%d", &n);   

    int *arr = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(n*sizeof(int));

    arrayFill(arr, n);
    arrayCopy(arr, arr2, n);
    arrayPrint(arr2,n);

    free(arr);
    free(arr2);
}
