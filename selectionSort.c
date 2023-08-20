//write  a program to sort a list in ascending order by selection sort in C
#include <stdio.h>

void selection_sort(int arr[], int n);

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selection_sort(arr, n);

    printf("Sorted list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

return 0;
}

void selection_sort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted part of array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the minimum element with the first element of unsorted part
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
         arr[i] = temp;
    }
}