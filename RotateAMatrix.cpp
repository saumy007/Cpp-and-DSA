#include<iostream>
using namespace std;

//there are two ways 
//Swapping the elements
// tranpose of a matrix

int rotateFunc(int arr[][3]){
    int temp;
    cout<<"this is a rotation function";
     for(int i = 0; i < 3; i++){
        for(int j = i; j < 3; j++){
             arr[i][j] = temp;
        temp = arr[j][i];
        arr[j][i] = arr[i][j];
        }    
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++)
        cout<<arr[i][j] <<" ";
    }


}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++)
        cout<<arr[i][j] <<" ";
    }

    rotateFunc(arr);
    cout << endl;

    
return 0;

}
