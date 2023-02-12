//static data members
#include<iostream>
using namespace std;
class A{
    int a;
    static int b;
    public :
    A(int x, int y){
        a = x;
        b = y;


    }
    void show(){
        cout<< "The value of a is  = " << a << endl;
        cout<< "The value of b is  = " << b << endl;
    }
    static void disp(){
        cout << "The value if b is = " << b << endl ;
    }
};

    int A::b=0; // initialization of static Data Members is always starts with 0 


int main(){
    A obj (10,20);
    A obj2(100, 200);
    obj.show();

    obj2.show();

    //access static without object
    A::disp();
    obj.show();

}