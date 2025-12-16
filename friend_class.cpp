//friend classes 
//friend function in OOPs
#include<iostream>
using namespace std;
class A;
class mux{
    int a,b;
    public: 
    void printNumber(A o1, A o2);
    int multiply(int n1, int n2);

};

class A{
    //declaration of calling class friends
    //using scope resolution operator
    
    int a,b; 
    public :
    void input(){
        cout<<"Enter the vlaues of a and b "<< endl;
        cin >>a >> b ;
    }
    // here the friend function can access the private variables of class A because it is giving the permission to it;
    friend void  add(A ob);   
    friend void mux :: printNumber(A o1, A o2);   // declaration
};



void  add(A ob){
    int c;
    c = ob.a+ob.b;
    cout<< "Sum of the a and b values = " << c << endl;
}


    int mux :: multiply( int n1, int n2){
        a = n1; b = n2;
        cout<<"enter the First Number && Second Number"<<endl;
        cin>>n1>>n2;
        int s =a*b;
        return s;
    }



    void mux ::printNumber(A o1, A o2){

        //cout << "the a is "<<endl<<a<<"the b is "<<b<<endl<<"the sum is "<<endl;
        cout<<o1.a<<endl<<o2.b<<endl;
    }






    
int main(){
    // A obj,obj1;
    // obj.input();
    // //add(obj);

    mux M1;
    cout << M1.multiply(10,20) << endl;
    //M1.printNumber(obj, obj1);
    return 0;
}


/*
properties of friend function
1. the add function here can take private memberfunctions and member variables
2. since it is not in the scope of class it cannot be called from the object of the class
obj.add() == invalid
3. can becalled or invoked without the help of any object 
4. usually contains the object as arguments
5. can be declared inside the public or private sections of the class
6. it cannot access the members directly by their names and need object_name.member



*/