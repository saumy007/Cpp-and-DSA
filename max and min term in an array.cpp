#include<iostream>
using namespace std;
int main(){
	int a[8]={1,2,3,1,2,4,5,9};
	int max=a[0],min=a[0];
	
	for(int i=0;i<8;i++){
		if(a[i]>max){
			max=a[i];
		}
		else if(min<a[i]){
			min=a[i]; 
		}
		
	}
	cout<<"max value "<<max<<endl;
	cout<<"min value "<<min<<endl;
	
}
