
#include<iostream>
using namespace std;
int main()

{
//Your code here
    //it run 3 times
    for(int i=3;i>0;i--){ 
        // it run 3 times
        for(int j=3;j>0;j--){
            // it run 3 times at first,then 2 times, atlast 1 time
            for(int k=0;k<i;k++){ 
               cout<<j<<" ";
           }
       }
       cout<<"$";
    }
}