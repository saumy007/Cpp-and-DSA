// Average of 30 students
#include<iostream>
using namespace std;
float avg(s_marks[30]){
	int s = 0;
	int s_marks[30];
	for(int i = 0;i < 30;i++){
		cin>>s_marks[i];
		cout<<endl;		
	}
	for(int i = 0;i < 30;i++){
		cout<<s_marks[i]<<endl;		
	}
	for(int i = 0;i < 30;i++){
		s+=s_marks[i];
		cout<<endl;		
	}
	float avg = s/30;
	cout<<"The Average marks are"<<avg;
	
	return avg;
}
int main(){
	int s[30];
}

