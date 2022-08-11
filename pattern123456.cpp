/*
print 
   1
   23
   456
   78910
*/
#include <iostream>                  
using namespace std;

int main() {    
    
    int row=1;
    int col=1;
    int n;
    int count =1;
    cout<<"enter the number";
    cin>>n; 
    while(row<=n)
    {    int col=1; 
        while(col<=row){
            cout<<count;
            col=col+1;
            count++;

        }cout<<endl;
        row++;
    }
    
    return 0;
}