// return by reference value
//1. Cannot return constant values
//2. Cannot return local variable 
//Code
#include<iostream>
using namespace std;
int a;

int &num(){
    return a;
}

int main(){
num() = 500;
cout <<"the value of a = " <<  a << endl ;
return 0;
}