// code in c++ to default constructor
#include<iostream>
using namespace std;
class constructc{
    private :
    int a ;
    int b ;
    public :
    constructc(){
        a = 10;
        b = 20;
    }
    void input(){
        cout<< "Input the value of a " << endl;
        cin>>a;
        cout<< "Input the value of b " << endl;
        cin>>b;

    }
    void show(){
        cout << "The value of a is = "<<a << endl;
        cout << "The value of b is = "<<b << endl;
    }

};
int main(){

    constructc obj ;
    obj.input();
    obj.show();

return 0;
}