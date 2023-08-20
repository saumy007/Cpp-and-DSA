// copy constructor ka prpogram hai 
#include<iostream>
using namespace std;
class prashant{
    private :
    int a;
    int b;
    public :
    
    //default constructor
    prashant(){
        cout<< "*********   this is default constructor  ***********"<<endl;
    }
    //parameterised constructor
    prashant(int x, int y){
        cout<< "******************  this is parameterised constructor ***************"<< endl;
        a = x;
        b = y;
    }
    //copy constructor 
    prashant(prashant &P){
        cout<< "**********************  copy constructor is called   ************";
        a = P.a;
        b = P.b;

    }

    void input(){
        cout<< " enter the value of a "<< endl;
        cin>> a;
        cout<< " enter the value of b "<< endl;
        cin>> b;
    }

    void show(){
        cout<< "The values are " << a << "    " << b << endl;
        
    }




};
int main(){
    prashant obj(20,10); // parameterized constructor calling
    prashant obj2(obj); // copy constructor calling
    //obj.input();
    obj.show();
    obj2.show();
    
}