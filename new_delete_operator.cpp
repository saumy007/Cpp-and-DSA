// dynamic memory allocation in cpp
#include<iostream>
using namespace std;
int main(){
    int a = 4; 
    int* ptr = &a;
    cout<< "the value of deferencing of a  is = " <<*(ptr)<<endl<<endl;
    //new Operator is used to dynamically allocate the memory to the variable at run time
        
    int  *p = new int(40);
    int *arr = new int[4];
    arr[0] = 40;
    arr[1] = 80;
    arr[2] = 70;
    arr[3] = 50;
 
    cout << "  " << arr[0] << " " << arr[1] << " " << arr[2] << "  "<< arr[3]<<endl;
    delete arr;
    cout<<"the value of deferencing of a is = "<<*(p);
    //delete operator



    return 0; 
}
