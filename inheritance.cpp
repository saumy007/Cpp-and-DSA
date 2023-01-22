#include<iostream>
using namespace std;
class A {
    public :
    A(){
        
        cout << "The value of a is = "<< 10<<endl;
    }
    int a  = 10;
    void display(){
    cout<<"\n from class A "<<endl;   
    }
   
};
class B{
    protected :
    int b = 20;
    
    void displayb(){
        cout<<"\n from class B"<<endl;
    }

};

class C{
    public :
    int c;
    
};

class D : public A{
    
    int d = 0;
    public : 
    void displayd()
    {
        cout<<d<<endl ;
       // display();

    }
    
};
class E : protected B, public D{
    public :
    
    void displaye(){

        cout<< b;
        displayb();
    }

};


int main(){
    D obj;
    obj.displayd();
    E obj2;
    obj2.displaye();
    return 0;
}