#include <bits/stdc++.h>
using namespace std;
int findgcd(int a,int b){
    for(int i = min(a,b);i<1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }

}

int main(){
    int a ,b;
    cout << "Enter the two numbers: ";
    cin>>a>>b;
    cout << "The GCD of the two numbers is: " << findgcd(a,b) << endl;
    return 0;
}