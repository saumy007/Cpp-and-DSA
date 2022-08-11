                              //Pattern problem 
#include <iostream>           //1 2 3 4 5
using namespace std;          //6 7 8 9 10  
                              //11 12 13 14 15  
int main() {                  //16 17 18 19 20
                              //21 22 23 24 25   
    int i=1,j=1,n;
    cout<<"enter the number \n";
    cin>>n;
    int count=1;

    while(i<=n){
        j=1;
        while(j<=n)
      {
            cout<<count<<" ";
            count++;
            j++;
      }
        cout<<endl;
       
      i=i+1;

    };  
    
    return 0;
}