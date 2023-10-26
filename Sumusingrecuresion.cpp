#include<iostream>
using namespace std;
int getSum(int arr[], int size){
    //base case of recursion
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];

    }
    int remainingPart = getSum(arr+1,size-1);
    int sum = arr[0] + remainingPart;
    return sum;

}



int main(){
    int arr[5] = {1,3,1,2,1};
    int size = 5;
    int ans = getSum(arr,size);
    cout << "the Sum is " << ans;
}