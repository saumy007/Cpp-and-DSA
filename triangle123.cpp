/*
print 
   1
   22
   333
   4444
   
*/
#include <iostream>                  
using namespace std;

int main() {    
    
    int row=1;
    int col=1;
    int n;
    cout<<"enter the number";
    cin>>n; 
    while(row<=n)
    {    int col=1; 
        while(col<=row){
            cout<<row;
            col=col+1;
            

        }cout<<endl;
        row++;
    }
    
    return 0;
}