#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    
    deque<int> d;
    d.push_front(67);
    d.push_back(14);
    d.push_back(144);
    d.push_back(21);
    d.push_front(45);

    cout<< d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    d.pop_back();






    // queue<int> q;

    // q.push(12);
    // q.push(1);
    // q.push(14);

    // cout << " the Size of Queue is :" << q.size()<<endl;
    // q.pop();
    // cout << " the Size of Queue is :" << q.size()<<endl;
    

}