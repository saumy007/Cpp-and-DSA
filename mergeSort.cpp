#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays into a single sorted subarray
void merge(vector<int> &arr, int l, int mid, int r) {
    vector<int> temp; // Temporary vector to store the merged elements
    int left = l, right = mid + 1;

    // Merging the two sorted subarrays
    while (left <= mid && right <= r) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]); // Copy element from left subarray
        } else {
            temp.push_back(arr[right++]); // Copy element from right subarray
        }
    }

    // Copy any remaining elements from the left subarray
    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    // Copy any remaining elements from the right subarray
    while (right <= r) {
        temp.push_back(arr[right++]);
    }

    // Copy merged elements back to the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[l + i] = temp[i];
    }

    // Debugging output to see the merging process
    cout << "Merged portion (" << l << " to " << r << "): ";
    for (int i = l; i <= r; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to recursively divide the array and apply merge sort
void mergeSort(vector<int> &arr, int l, int r) {
    if (l >= r) return; // Base case: If the array has 1 or no elements, return

    int mid = (l + r) / 2; // Find the middle index
    // left half: l to mid, right half: mid+1 to r 
    // Recursively sort the left half
    mergeSort(arr, l, mid);

    // Recursively sort the right half
    mergeSort(arr, mid + 1, r);

    // Merge the two sorted halves
    merge(arr, l, mid, r);
}

int main() {
    int n;
    cin >> n; // Input the number of elements
    vector<int> arr(n); // Declare an array of size n

    // Take array input from the user
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Apply merge sort on the entire array
    mergeSort(arr, 0, n - 1);

    // Print the final sorted array
    cout << "Final Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
