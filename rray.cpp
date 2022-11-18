// declare 1d array and access it 
#include<iostream>
using namespace std;
int main(){
	int a[10];
	int n;
	cout<<"enter the number of elements you want to enter"<<endl;
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
		
	}
	
	return 0;

	
}

