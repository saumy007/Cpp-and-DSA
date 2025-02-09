#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter number ";
    cin>>n;
    int arr[n];
    cout<<"enter the array ";
    for(int i = 0;i<n;i++){
    cin>>arr[i];    
    }
    cout<<"check the numbers"<<endl;
    map<int, int> mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }


    //auto iterate in the map
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;

    }

//precompute

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch

        return  mpp[number];

    }

}