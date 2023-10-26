#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n ==0){
        return 0;
    }
    if(n ==1){
        return 1;
    }
    int ans = fibonacci(n-2)+fibonacci(n-1);
    return ans;
}
int main(){
    int n;
    cout << "Enter the number to find out fibonnaci"<<endl;
    cin>>n;
    n = fibonacci(n);
    cout << "the fibonacci is "<< n;
}