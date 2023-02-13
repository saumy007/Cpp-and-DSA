// Polymorphism types 
// 1. Compile time polymorphism
        // 1.Function Overloading
        // 2.Operator overloading
// 2. Run time polymorphism
//    2.1use of Pointer to derived class
#include<iostream>
using namespace std;
class A{
    public :
    int a ;
    void show (){
        cout<< "the value of a is = " << a << endl;

    }

};
class B : public A{
    public :
    int b;
    void show (){
        cout<<"derived class is called " ;
        cout<< "the value of a is = " << a << endl;
        cout<< "the value of b is = " << b << endl;
    }
};
int main(){
    A *baseclass;
    A obj_base;
    B *derivedclass;
    B obj_derived;
    baseclass = &obj_derived; // pointing base calss to derived class 
    baseclass->a = 34;
    baseclass->show();
    derivedclass = &obj_derived;
    derivedclass->b = 94;
    derivedclass ->show();
}