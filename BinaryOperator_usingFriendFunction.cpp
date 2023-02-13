// Binary Operator Overloading usign friend function 
#include<iostream>
using namespace std ;
class demo{
    int a;
    int b;
    public:
    demo(){

    }
    demo(int x, int y)
    {
    a = x;
    b = y;
    }
friend void sum(demo &t);
    void show(){
        cout << "the value of a is = " << a << endl << " the value of b is = " << b ;  
    }
};
void sum(demo &t){
    
    demo temp ;
    temp.a = a + t.a;
    temp.b = a + t.b; 
    return temp ;

}
int main(){

    demo obj(10,20), obj1(20,30), obj2  ;
    obj2 = obj + obj1;
    obj2.show();

}  