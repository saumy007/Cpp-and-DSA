#include<iostream>
using namespace std;
int main(){
    int temp[4]= {0,10,20,5};
    int *p = &temp[0];
    p=p+1;
    cout<<"The value of temp " << temp <<endl;
    cout<<"The value of &temp " << &temp <<endl;
    cout<<"The value of p " << p <<endl;
    cout <<" the value of &p "<< &p<< endl;
    cout <<"the value of *p "<< *p <<endl;
    cout <<" the value of temp[0]"<<temp[0] << endl;
    cout <<" the value of temp[1]"<<temp[1] << endl;

    

} 

