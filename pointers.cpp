#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout <<endl;
    // address of num = &
    cout << "value of num is " << num << endl;
    cout << "The addres of num is " << &num << endl;
    // using dference operator
    //defining the //*p = &num
    int *p = &num;
    cout << " the value of *p " << *p << endl;
    cout << "the value of &num" << &num << endl;
    cout << "the value of p" << p << endl;
    cout << "the value of num" << num << endl;
    //cout << "the value of num" << num;
    (*p)++;
    cout << "pointer Arithmatic  " << *p << endl; 
    cout << " the valie of num is :" << num << endl;
    int q;
    q = *p;
    q++;
    cout << "Change value of q does this affect value of *p? " << q << endl;
    cout << "Change value of q does this affect value of *p? p is here " << *p;
    
}