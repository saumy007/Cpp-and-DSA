#include<iostream>
using namespace std;
int main(){

    // array in pointers
    /*
    int arr[4] = {1,5,10,45};
    cout << "1 The address of array is " << arr << endl;
    cout << "2 the address of block 0 is " << arr[0] << endl;
    cout << "3 the address of block 0 is " << &arr[0] << endl;
    cout << "4 the address of block 1 is " << &arr[1] << endl;
    cout << "5 the address of block  " << *arr << endl;
    cout << "6 the address of block addtion  " << *arr + 1 << endl;
    cout << "6.5 the address of block  " << *(arr+1) << endl;
    cout << "7 the address of block  " << *arr << endl;
    cout << "8 the address of block address adition " << arr+1 << endl;
    cout << "9 the address of block arress print " << arr << endl;
    //arr[i] = *(arr+i)
    //i[arr] = *(i+arr)
    cout << "10 the address of block address adition " << arr[1] << endl;
    //cout << " the address of block 1 is " << *arr[1];
    cout << "11 the address of block address adition " << *(arr+1) << endl;
    cout << "12 the address of block address adition " << 1[arr] << endl;
    cout << "13 the address of block address adition " << *(1+arr) << endl;
    */
    // addresses in pointers and Arrays
    
    /*
    cout<< sizeof(temp[0]) << endl;
    cout<< sizeof(temp) << endl;
    cout<< sizeof(ptr) << endl;
    cout<< sizeof(*ptr) << endl;
    cout<< sizeof(&ptr) << endl;
    
    */
    int temp[4]= {0,10,20,5};
    int *p = &temp[0];
    cout<<"The value of temp" << temp + 1 <<endl;
    cout<<"the value of temp" << p +1 << endl;





}