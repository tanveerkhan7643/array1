#include <stdio.h>

// swap function (2 elements ko swap karega)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // last element ko pivot banaya
    int i = low - 1; // chhote elements ka index

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]); // chhote element ko left me bhejo
        }
    }
    swap(&arr[i+1], &arr[high]); // pivot ko sahi jagah rakho
    return (i + 1);
}

// quick sort function
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);  // left part sort karo
        quickSort(arr, pi + 1, high); // right part sort karo
    }
}

int main() {
    int arr[] = {50, 20, 60, 10, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

