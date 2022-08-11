/*
print 
   1
   21
   321
   4321
   
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
    {    int col=1;                    // take i-j+1 as to take 1 in the end make calculations to get the logic 
        while(col<=row){
            cout<<row-col+1;
            col=col+1;
            
            

        }cout<<endl;
        row++;
    }
    
    return 0;
}