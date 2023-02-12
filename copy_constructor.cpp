// a copy constructor program 
#include<iostream>
using namespace std;
class cop{
    private :
    int a ;
    int b ;
    public :
    void input(int x, int y){         // parameterized constructor
        a = x;
        b = y;
    }
    cop(){} // default constructor


    cop(cop &c){                 // copy constructor
    
        a = c.a;
        b = c.b;
    }

    void display(){
        cout<<"the value of this is " << a << endl;
        cout<<"the value of this is " << b << endl;
    }

};

int main(){
cop obj;

 obj.input(10,20);
 obj.display();

 cop obj2(obj);
obj2.display();

return 0;
}