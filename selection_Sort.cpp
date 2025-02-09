#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int min = i; //take min and compare with all the elements
        for(int j = i+1; j<n; j++){ //start from the next element
            if(arr[j]<arr[min]){  //if the element is smaller than the min element
                min = j; //replace the min element with the smaller element
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);

}