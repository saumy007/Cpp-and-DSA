#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
           int n = nums.size();
           k = k%n;
           vector<int> temp(k);
            for(int i = 0;i<k;i++){
                temp[i] = nums[i]; // storingvalues in temp variable
    
            }

            cout << "temp array is: "<<endl;
            for(int i = 0;i<k;i++){
                cout<<temp[i]<<"  ";
            }
            
            // storing values
            for(int i = k; i< n;i++){
                nums[i-k] = nums[i]; 
            }

            cout << "nums array is: "<<endl;
            for(int i = 0;i<n;i++){
                cout<<nums[i]<<"  ";
            }
    
            for(int i = n-k;i<n;i++){
                nums[i]= temp[i-(n-k)];
            }
            cout<<"final aray is: "<<endl;
            for(int i = 0;i<n;i++){
                cout<<nums[i]<<"  ";
            }
            
        }
    };



    int main() {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // Example input
        int k = 3; // Number of rotations
    
        Solution sol;
        sol.rotate(nums, k);
    
        // Output rotated array
        cout << "Rotated array: ";
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    
        
    }