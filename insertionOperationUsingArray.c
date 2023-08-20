//3.write a program to insertion operation#include <stdio.h>

int main() {
   int arr[100], n, i, pos, val;

   printf("Enter number of elements in array:");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for(i=0; i<n; i++)
      scanf("%d", &arr[i]);

   printf("Enter the position where you want to insert an element:");
   scanf("%d", &pos);

   printf("Enter the value to insert:");
   scanf("%d", &val);

   // Shift elements to the right
   for(i=n-1; i>=pos-1; i--)
      arr[i+1] = arr[i];

   // Insert the value at the specified position
   arr[pos-1] = val;

   // Print the updated array
   printf("Array after insertion of %d at position %d:\n", val, pos);
   for(i=0; i<=n; i++)
      printf("%d ", arr[i]);

return 0;
}