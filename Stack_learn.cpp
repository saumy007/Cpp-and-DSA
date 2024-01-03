#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;
    //pushing in stack
    s.push(3);
    s.push(14);
    s.push(15);

    //pop in stack
    s.pop();
    s.pop();
    
    


    // peek
    cout << "printing the top element  " << s.top()<< endl;
    cout << "the Size of the stack is " << s.size() << endl;
    if(s.empty()){
        cout << "Stack is emplty";

    }
    else{
        cout << "Stack is not empty";
    }
}