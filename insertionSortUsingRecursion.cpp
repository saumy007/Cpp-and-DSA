#include<iostream>
using namespace std;
void sort(int *arr,int size){

    //base case
    if(size <= 1)
    return;
    sort(arr,size - 1);
    int last = arr[size -1];
    int j = size-2;

    while(j>=0 && arr[j]>last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;

     


}
int main(){
    int arr[5]= {5,4,3,2,1};
    int size =5;
    sort(arr,size);
    for(int i =0;i<size;i++){
        cout << arr[i];
    }

}