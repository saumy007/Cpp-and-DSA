#include<iostream>
using namespace std;
int main(){

    // array in pointers
    
    int arr[10] = {0};
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

    //cout << " the address of block 1 is " << *arr[1];
}