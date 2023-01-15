#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity->"<<v.capacity()<<endl; //total kitne element k liye isko memory allocate hui hai
    v.push_back(1);
    
    cout<<"Capacity->"<<v.capacity()<<endl; //total kitne element k liye isko memory allocate hui hai
    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl; //total kitne element k liye isko memory allocate hui hai
    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl; //total kitne element k liye isko memory allocate hui hai
    v.push_back(4);

    cout<<"size->"<<v.size()<<endl;
    cout<<"element"<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

        cout<<"array at second element  "<<v.at(2)<<endl;               // these function are used with STL library
		cout<<"empty or not   "<<v.empty()<<endl;              //to check wheter it empty or not
		cout<<"first element   "<<v.front()<<endl;              //to see front element
		cout<<"last element   "<<v.back()<<endl;    
        
        //now check push and pop function
        cout<<"before pop"<<endl;
        for(int i:v){
            cout<<i<<" ";
        }cout<<endl;
        
        v.pop_back();
        cout<<"after pop"<<endl;
        for(int i:v){
            cout<<i<<" ";
        }cout<<endl;
        //clear function
        cout<<"before clear-> "<<v.size()<<endl;
        v.clear();
        cout<<"after clear-> "<<v.size()<<endl;
        
}