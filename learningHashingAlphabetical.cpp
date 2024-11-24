#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "enter string"<<endl;
    cin>>s;
    int hash[26] = {0};  // use 256 for all characters and c - 'a' for lowercase letters
    // use c - 'A' for uppercase letters
    for(int i = 0; i<s.size();i++){
        hash[s[i] - 'a']++;

    }
    int q;
    cout << "enter the size of the string"<<endl;
    cin>>q;
    while(q--){
        char c;
        cin >> c;
        cout << c<<endl;
    //fetch
    cout <<"number of alphabet are"<< hash[c-'a'] << endl; 
    
        
    }   
    
    return 0;


}