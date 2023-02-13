// unary operation using friedn function
#include<iostream>
using namespace std;
class demo {
    int a ;
    int b;
    public :
        demo(int x, int y){
            a = x;
            b = y;

        }
        void show(){
            cout<< "the value of a is = " << a << endl << "the value if b is = " << b ;
        }
        friend void operator -(demo &obj);
};
void operator -(demo &obj ){
    obj.a = -obj.a;
    obj.b = -obj.b;
}
int main(){
    demo obj(10,20);
    
    obj.show();
    cout<< "\n*****************now operator overloading using friend function*****************" << endl;
    -obj;
    obj.show();


}