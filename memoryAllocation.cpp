#include<iostream>
#define pi 3.14
using namespace std;
int main(){
/*
float CirArea;
float r;
r = 10;
CirArea = pi*r*r;
cout << "Area of Circle is : "<<CirArea <<endl;*/

        //dynamic Memory alllocation of 2D array

    int n;
    //creation
    cin>>n;

    int** arr = new int*[n];
    for(int i = 0;i<n;i++){
        arr[i] =new int[n];
    }

    
     //taking input
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
   
     //taking output
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        //cout<<endl;

    }
   

    //to free up memory
    
    for(int i = 0;i<n;i++){
        
            delete [] arr[i];
        }
    delete [] arr;


}
//
