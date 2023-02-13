//unary oprator overloading
#include<iostream>
using namespace std;
class demo{

    int a, b;
    public :
        demo(int x, int y ){
            a = x;
            b = y;

        }
    void show(){
        cout << "The value of a is = " << a << endl << "The value of b is = "<< b << endl;

    
    }
    void operator -(){
        a = -a;
        b = -b;

    } 

};

int main(){
    demo obj(10, 20);
    obj.show();
    cout<<"**************Now applying Operator Overloading *****************" << endl;
    -obj;
    obj.show();
    
}