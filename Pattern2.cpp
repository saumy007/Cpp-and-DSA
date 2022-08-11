                              //Pattern problem 
#include <iostream>           //4321
using namespace std;          //4321  
                              //4321  
int main() {    
    int i=1,j=1,n;
    cout<<"enter the number \n";
    cin>>n;

    while(i<=n){
        j=1;
        while(j<=n)
      {
            cout<<n-j+1<<" ";
            j++;
      }
        cout<<endl;
       
      i=i+1;

    };  
    
    return 0;
}