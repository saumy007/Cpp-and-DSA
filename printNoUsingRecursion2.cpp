#include <bits/stdc++.h>
using namespace std;
void num(int i,int n){
    if(i>n) return;
    cout<<i<<"first "<<endl;
    num(i+1,n);
    cout<<i<<"second "<<endl;
    

}

int main(){
    int i=0, n;
    cout<< "enter the numbers ";
    cin>>n;
    num(i,n);
    return 0;
}