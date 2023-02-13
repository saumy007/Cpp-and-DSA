//binary oprator overloading 
#include<iostream>
using namespace std ;
class demo{
    private :
    int a, b;
    public :
    demo(){

    }
    demo(int x, int y){
        a = x;
        b = y;

    }
    void show(){
        cout<< "tha value of a is = " << a << endl << "the value of b is = " << b << endl;

    }
    demo operator +(demo &obj){
        demo temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp ;
    }
};


int main(){
demo obj(10,20),obj1(10,30),obj2;
obj2 = obj + obj1;
obj2.show();
return 0;

}