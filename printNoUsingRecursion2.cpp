#include <bits/stdc++.h>
using namespace std;
void num(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    num(i+1,n);
    

}

int main(){
    int i=0, n;
    cout<< "enter the numbers ";
    cin>>n;
    num(i,n);
    return 0;
}