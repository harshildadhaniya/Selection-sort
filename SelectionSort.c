#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Print an array */
void print_array(int arr[], int n)
{
    printf("{ ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("}\n");
}

/* Calculate the index of the minimum value in the array */
int min_val_index(int arr[], int b, int e){

    /* This program begins from b (included) and stops at e (not included) */

    int index = b;
    int min = arr[b];
    
    if (b >= e){
        printf("\nInvalid input!! the beginning and end of the search cannot be the same.\n");
        return -1;
    }
    else{
        for(int i = b+1; i < e; i++){
            
            if(min > arr[i]){
                min = arr[i];
                index = i;
            }
        }
    }

    return index;

}

/* Perform selection sort on a given array (in place) */
void selection_sort(int arr[], int n){

    int pos;
    int temp;

    for(int i = 0; i < n-1; i++){

        pos = min_val_index(arr, i, n);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

int main(){

    int A[] = {11, 1, 6, 300, 12, 20, 13, 5, 12};
    int n = sizeof(A) / sizeof(A[0]);
 
    printf("The original array:\n");
    print_array(A,n);

    printf("\nNow the array is sorted (in place):\n");

    selection_sort(A, n);
    print_array(A, n);
 
    return 0;
}
