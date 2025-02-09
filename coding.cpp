#include<bits/stdc++.h>
using namespace std;
int main(){


    int arr = {2,7,11,15};
    int n = num.size();
    int l=0;
    int r=arr.size();
    
    unordered_map<int, int > num;
    for(int i = 0;i<n; i++){
        int comp = target - nums[i];

        if(num.find(comp)!= num.end){
            return {num[comp],i};
        }
    }
    return num[]

}