#include<bits/stdc++.h>
#include<vector>
using namespace std;
int* printDivisors(int n, int &size){
// Write your code here
vector<int> divisor;
for (int i = 1; i <= n; i++) {

  if (n % i == 0) {
    divisor.push_back(i);
  }
}

    size=divisor.size();
    int *ans = new int[size];
    for(int i =0;i< size;i++){
        ans[i] = divisor[i];
    }

    return ans;

}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int size;
    int *ans = printDivisors(n,size);
    cout<<"The divisors are"<<endl;
    for(int i =0;i<size;i++){
        cout<<ans[i]<<" ";
    }
    delete [] ans; 
    return 0;
}


