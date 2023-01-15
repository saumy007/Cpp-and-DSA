#include<iostream>
#include<array>
using namespace std;
int main(){
	int basic[3]= {1,2,3};              //this is a static vector 
	array<int, 4> a= {1,2,3,4};
	int size = a.size(); 	              //calculates the size of the elements 
	for(int i=0;i<size; i++){
		cout<<a[i]<<endl;
	}		
		cout<<"array at second ele  ment  "<<a.at(2)<<endl;               // these function are used with STL library
		cout<<"empty or not   "<<a.empty()<<endl;              //to check wheter it empty or not
		cout<<"first element   "<<a.front()<<endl;              //to see front element
		cout<<"last element   "<<a.back()<<endl;              //to see the last element 
	}

