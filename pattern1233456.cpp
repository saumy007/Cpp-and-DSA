/*
print 
   1
   23
   345
   4567
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
    {    int col=1; int val=row;                    // take val=row to make 23 pattern kuki vo while loop k syntax mei bhi use hora hai
        while(col<=row){
            cout<<val;
            col=col+1;
            val++;
            

        }cout<<endl;
        row++;
    }
    
    return 0;
}