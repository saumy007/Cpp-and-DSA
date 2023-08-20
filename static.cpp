//static data members and member funcyion
#include<iostream>
using namespace std;
class prashant{
    int a ;
    static int b;
    public:
    prashant(int x , int y){
        a = x;
        b = y;

    }
    
    void input(){
        cout << " Enter the values a and b"<< endl; 
        cin >> a ;
        //cin >> b;

    }
    void show(){
        cout << "the value of a and b is  " << a << "     " << b << endl;

    }
     static void disp(){
        cout << "The value if b is = " << b << endl ;
    }
};
int prashant :: b = 0;


int main(){
    prashant obj(10,20);
    prashant obj2(400,500);
   /// prashant obj3(0,0);
   // obj3.show();
    obj.show();
    prashant ::disp();

}

