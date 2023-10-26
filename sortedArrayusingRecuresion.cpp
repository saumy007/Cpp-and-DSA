#include<iostream>
using namespace std;
bool isSorted(int *arr, int size){
    //base case
    if(size == 0 ||size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }

    bool isremaining =  isSorted(arr+1,size-1);
    return isremaining;
}


int main(){
    int arr[5] = {4,5,6,15,84};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout << "Array is sorted";
    }
    else{
        cout << "The array is not sorted";
    }

}