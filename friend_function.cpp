//friend function in OOPs
#include<iostream>
using namespace std;
class A{
    int a,b;
    public :
    void input(){
        cout<<"Enter the vlaues of a and b "<< endl;
        cin >>a >> b ;
    }
    friend void  add(A ob);
};
void  add(A ob){
    int c;
    c = ob.a+ob.b;
    cout<< "Sum of the a and b values = " << c << endl;
}


int main(){
    A obj;
    obj.input();
    add(obj);



    return 0;
}