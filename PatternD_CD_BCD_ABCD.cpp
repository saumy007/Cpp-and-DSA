/*
print 
  D
  CD
  BCD
  ABCD5

*/
#include <iostream>                  
using namespace std;

int main() {    
    
    int row=1;
    int col;
    int n;
    
    cout<<"enter the number";
    cin>>n; 
    while(row<=n)
    {    col=1;   
            char ch = 'A'+n-row;                                    // take i-j+1 as to take 1 in the end make calculations to get the logic 
        while (col<=n) {
             
            cout<<ch<<"  ";
            col++;
            ch=ch+1;
            

        }
        cout<<endl;
        row++;
    }
    
    return 0;
}