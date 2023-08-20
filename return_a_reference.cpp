// return by reference value
//1. Cannot return constant values
//2. Cannot return local variable 
//Code
#include<iostream>
using namespace std;
int a;         // global variable

int &num(){
    return a;    // meaning h iska a = &num()
}

int main(){
    int a = 400;
num() = 500;
cout <<"the value of a = " <<  ::a << endl ;
return 0;
}