// this pointer in cpp
#include<iostream>
using namespace std;
class A{
    int a ;
    public :
        void setData(int a){
        this->a = a;
//If we do not use this pointer here then this will cause an error  in the program 
// this pointer lets the ser distingush between this local variable and class variable of the class
//*********1. To return a reference calling 
//*********2. when local variable name is same as class variable


    }
        void showData(){
            cout<< " The value of a is  " << a << endl;

        } 
        
};




int main(){
    A a;
    a.setData(5);
    a.showData();
    


    return 0;
}