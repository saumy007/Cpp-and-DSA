//reverse a string Code
#include<iostream>
#include<string>
using namespace std;
void reverse( int i, int j,string& str){
    //base case
    cout << "call received for " <<str<<endl;
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(i,j,str);
}


int main(){
    string name = "saumy";
    reverse(0,name.length()-1,name);
    cout << name;
}