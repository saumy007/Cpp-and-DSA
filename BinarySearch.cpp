//bindary search
#include<iostream>
using namespace std;
int binary_search(int arr[], int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = (start + end)/2;
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
		mid = (start+end)/2;	
	}
	return -1;
	
}
int main(){
	int even[6]={2,4,6,9,11,15};
	int odd[7]={1,6,9,13,17,20,22};
	int indexeven = binary_search(even,6,11);
	int indexodd = binary_search(odd,7,20);
	cout<<"Index of the Number is "<<indexeven<<endl;
	cout<<"Index of the Number is "<<indexodd<<endl;
	return 0;
	
	
	
	
}
