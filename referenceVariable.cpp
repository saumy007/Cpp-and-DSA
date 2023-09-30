#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int &j = i;
    cout <<j <<endl;
    int l;
    //i = &l;
    cout << l;
    //dynamic mem goes into heap and static goes into stack
    //example of static
    int a[50];
    //example of dynamic 
    //for dynamic memory allocation we use new keyword
    int* arr = new int[50];
}

//program to learn reference variable
