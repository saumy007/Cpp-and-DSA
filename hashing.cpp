#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "enter the string ";

    cin>>s;

    int hash[256]={0};
    for(int i =0;i<s.size();i++){
        hash[s[i]]++; // auto converts to itself to its ASCII
    }
    cout << "enter the number of queries ";
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout << hash[c] << endl;

    }
    return 0;
}