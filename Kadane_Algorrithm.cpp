#include <iostream>
#include <vector>
#include <algorithm>

//Kadanes Algorithm to find the maximum subarray sum
using namespace std;
int maxSummation(vector<int> &arr) {
    int maxSum = arr[0];

    int currentSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}


int main(){

    vector <int> arr = {-2};
    //create a variable to store the maximum sum
    int maxSum = maxSummation(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;

}