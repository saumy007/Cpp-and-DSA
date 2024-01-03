#include<iostream>
using namespace std;

class Stack{
    // properties
    public:
        int *arr;
        int top;
        int size;
    //Constructor
    Stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push( int element){
     if(size - top > 1){
        top++;
        arr[top] = element;
     }
     else{
        cout << "Stack Overflow";
     }
    }
    
    
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << " Stack underflow";
        }
    }

    int peek(){
        if(top >=0 ){
                return arr[top];
        }
        else{
            cout << " Stack is Empty "<< endl;
            return -1;
        }
            
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else 
            return false;
    
    }
    

};

int  main(){
    Stack s(25);
        s.push(5);
        s.push(15);
        s.push(23);
    cout << s.peek()<<endl;
        s.pop();
    cout << s.peek()<< endl;    
        s.pop();
    cout << s.peek()<< endl;

}
