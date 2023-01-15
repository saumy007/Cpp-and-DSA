//search rotated array in sorted array
#include<iostream>
using namespace std;
int binarysearch(int arr[], int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end-start)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;	
		}
		if (key>arr[mid]){
			start = mid + 1;// go to right part
			
		}
		else{
			end = mid - 1;//go to left part
		}
		mid = start + (end-start)/2;	
	}
	return -1;
	
}
int getPivot(int arr[],int n){
	int s = 0;
	int e = n-1;
	int mid = s+(e-s)/2;
	while(s<e){
		
	 if(arr[mid]==arr[0]){
		s = mid + 1;
	}
		
	else{
		e = mid;
	}
	mid = s+(e-s)/2;
	}

	return s;
		
	}
int main(){
	int arr[]={2,5,14,25,50,60};
	int n;
	int k=14;
	  int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
	
}
