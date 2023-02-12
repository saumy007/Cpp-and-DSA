// code in c++ to default constructor
#include<iostream>
using namespace std;
class constructc{
    private :
    int a ;
    int b ;
    public :
    constructc(int x, int y){
        a = x;
        b = y;
    }
    // void input(){
    //     cout<< "Input the value of a " << endl;
    //     cin>>a;
    //     cout<< "Input the value of b " << endl;
    //     cin>>b;

    // }
    void show(){
        cout << "The value of a is = "<<a << endl;
        cout << "The value of b is = "<<b << endl;
    }

};
int main(){

    constructc obj(20, 30) ;
    // obj.input();
    obj.show();

return 0;
}