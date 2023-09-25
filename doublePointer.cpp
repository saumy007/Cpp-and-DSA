//double pointer code
#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int* ptr =&i;
    int** ptr2 =&ptr;
    cout << "1.  working fine   "<<endl;
    cout << "2.  value of i    " << i <<endl;
    cout << "3.  value of &i    " << &i <<endl;
    cout << "4.  value of *ptr    " << *ptr <<endl;
    cout << "5.  value of &ptr    " << &ptr <<endl;
    cout << "6.  value of **ptr    " << **ptr2 <<endl;
    cout << "7.  value of &ptr2    " << &ptr2 <<endl;
    cout << "8.  value of ptr    " << ptr <<endl;
    cout << "9.  value of ptr2    " << ptr2 <<endl;
}