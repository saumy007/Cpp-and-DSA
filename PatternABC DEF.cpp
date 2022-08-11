/*
print 
   A    
   BB
   CCC
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
    {    col=1;   
         char ch = 'A'+row-1;                                        // take i-j+1 as to take 1 in the end make calculations to get the logic 
        while (col<=row) {
            
            cout<<ch<<"  ";
            col++;
            ch++;

        }
        cout<<endl;
        row++;
    }
    
    return 0;
}