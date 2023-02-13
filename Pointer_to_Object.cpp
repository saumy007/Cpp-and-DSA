// poointer to object in OOPs
#include<iostream>
using namespace std ;
class complex{
    int real ;
    int imaginary;
    public:
    complex(){

    }
    complex(int x , int y){
        real = x;
        imaginary = y;

    }
    void getdata(){
        cout<< " real part is = " << real << endl; 
        cout<< " imaginary' part is = " << imaginary << endl; 
    }
    void setdata(int a, int b){
        real = a;
        imaginary = b ;

    }
};

int main(){
    complex obj(10,50);
    complex *ptr = new complex;
    //*ptr = &obj;
    //(*ptr).setdata(51,50); is same as writing 
    ptr->setdata(51,50);
    (*ptr).getdata();


    return 0;
}