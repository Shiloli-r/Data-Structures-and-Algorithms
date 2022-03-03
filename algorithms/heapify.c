/*  Algorithm for Heapifying

heapify(array)
   Root = array[0]
   Largest = largest( array[0] , array [2 * 0 + 1]. array[2 * 0 + 2])
   if(Root != Largest)
       Swap(Root, Largest)
*/

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

void heapify(int arr[], int n, int i){

    int largest = i; // initialize root to be the largest
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // if LC is larger than the root
    if(l < n && arr[l] > arr[largest])
        largest = l;

    // if RC is larger than the root
    if(r < n && arr[r] > arr[largest])
        largest = r;

       // If largest is not root  - means we indeed found a childer > root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

int main(){

    int arr[] = { 4, 10, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    heapify(arr, n, 0);
    printArray(arr, n);

    return 0;
}