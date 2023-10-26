#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int size,int key){
    //base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = LinearSearch(arr+1,size-1,key);
        return remainingPart;
    }


}
int main(){
    int arr[5]={4,5,6,7,8};
    int size = 5;
    int key = 6;
    bool ans = LinearSearch(arr,size,key);
    if(ans == 0){
        cout << "not present";
    }
    else{
        cout<< "present";
    }
        
}