#include <stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to Heapify (Max Heap)
void heapify(int arr[], int n, int i){
    int largest = i;  // initialize largest as root
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // if the left is greater than root
    if(left < n && arr[left] > arr[largest])
        largest = left;
    
    // if the right is greater than root
    if(right < n && arr[right] > arr[largest])
        largest = right;

    // if the largest is not root
    if(largest != i){
        swap(&arr[i], &arr[largest]);

        heapify(arr, n, largest); // call the heapify function for the affected subtree
    }

}

void heapsort(int arr[], int n){
    
    // Build the heap
    for(int i = (n/2)-1; i >= 0; i--)
        heapify(arr, n, i);

    // one by one extract the element from heap
    for(int i=n-1; i>0; i--){

        // move current root to the end
        swap(&arr[0], &arr[i]);

        // call the heapify function for the reduced heap
        heapify(arr, i, 0);
    }
}

int main(){

    int arr[] = { 12, 11, 13, 5, 6, 7 };
    
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n/2-1);

    heapsort(arr, n);
    printArray(arr, n);

    return 0;
}