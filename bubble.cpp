//binary search
#include<iostream>
using namespace std;
	
void bubbleort(int arr[], int n,int size){
		int beg = 0;
	int end = 7;
	int loc;
		while(beg<=end){
		for(int i = 0;i < n;i++){
		int mid =(end + beg)/2;

		if(arr[mid] == n){
			loc = mid;
		}
		else if(arr[mid]<n){
			
			
			beg = mid + 1;
			loc = beg;
		}
		else{
			end = mid - 1;
			loc = end;
		}
	}
		
	}
	}

int main(){
	int a[8]={1,3,5,6,17,27,57,90};
	int beg = 0;
	int n;
	int end = 7;
	int	size = 5;
	int loc;
	cout<<"Enter the Element to search for"<<endl;
	cin>>n;
	bubblesort(a,n,size);	
	cout<<"the element You have been searching for is at "<<loc<<" index value"<<endl;
	return 0;
}

