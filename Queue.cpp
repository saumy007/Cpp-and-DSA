#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(12);
    q.push(1);
    q.push(14);

    cout << " the Size of Queue is :" << q.size()<<endl;
    q.pop();
    cout << " the Size of Queue is :" << q.size()<<endl;

}