#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d; //deque where we canw do pop and push either from front or from back .... both sides 
    
    d.push_back(1);
    
    d.push_front(2);
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    // d.pop_front();
    
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;
    cout<<"find the number at 1 position ->"<<d.at(1)<<endl;
    cout<<"front element "<<d.front()<<endl;
    cout<<"back element "<<d.back()<<endl;
    
    cout<<"before erase"<<d.size()<<endl; // with erase function we have to give both the begin and till which element
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl; 
    for(int i:d){
        cout<<i<<endl;
    }

}