//binary search
#include<iostream>
using namespace std;
int main(){
	int a[8]={1,3,5,6,17,27,57,90};
	int beg = 0;
	int n;
	int end = 7;
	
	int loc;
	cout<<"Enter the Element to search for"<<endl;
	cin>>n;
	while(beg<=end){
		for(int i = 0;i < n;i++){
		int mid =(end + beg)/2;
		
		if(a[mid] == n){
			loc = mid;
		}
		else if(a[mid]<n){
			
			
			beg = mid + 1;
			
		}
		else{
			end = mid - 1;
			
		}
	}
		
	}
	
	
	cout<<"the element You have been searching for is at "<<loc<<" index value"<<endl;
	return 0;
}

