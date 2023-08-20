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
/*

According to the definition of static data members, we can define static variables only for once (i.e in class only) and it is shared by every instance of the class.
 Also, static members can be accessed without any object.

As per OOPS guidelines compiler does not allocate memory to class instead of that it allocates memory to objects,
 but static members are independent of object, so to allocate memory to static variables, we define the static data members outside of the class,
that's why once this variable is declared, it exists till the program executes. Generally static member functions are used to modify the static
variables.
*/