#include<bits/stdc++.h>
using namespace std;

//to reduce the space complexity of the code of dynamic programming we have to make it such that we use prev and prev2 variables and make this easier 



int main(){
    int n =12;
    int prev = 1, prev2 = 0;
    int curri;
    for(int i = 2;i<=n;i++){
        curri = prev + prev2;
        prev2 = prev;
        prev = curri;
        
        
    }
cout <<prev<<"  ";




}