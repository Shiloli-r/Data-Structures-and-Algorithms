#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


/* Function to print an array */
void printArray(int arr[], int size){
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Optimization is such that the sorting ends when the inner loop doesn't swap anything */
void bubbleSort(int arr[], int n){
    bool swapped;
    for(int i = 0; i<n-1; i++){
        swapped = false;
        for(int j =0; j<n-i-1; j++){
            if(arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
            swapped = true;
            printArray(arr, n);
        }

        if(!swapped) // If no elements were swapped
            break;
    }
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
