#include<iostream>                                      
using namespace std;
bool binarySearch(int arr[5], int s, int e,int key){
    //binary search using recuresion learning
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[5]={4,5,6,7,8};
    int size = 5;
    int key = 6;
    bool ans = binarySearch(arr,0,5,key);
    cout << "is present of not " << ans;


}