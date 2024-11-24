// mapping in cpp
#include<map>
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of the map"<<endl;
    cin>>n;
    int arr[n];
    cout <<"enter array here"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];

    }

    //pre computer
    map<int, int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;

    }
    //iterate in the map
    for(auto it : mp){
        cout << it.first<<"->"<<it.second<<endl;
    }




    int q;
    cout<<"enter the numbers to be found"<<endl;
    cin>>q;
    cout<<"enter numbers to be found"<<endl;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mp[number]<<endl;
    }

return 0;
}