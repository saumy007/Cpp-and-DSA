#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2); // dynamically increases it s size and pushes 2at the back faster
    vector<pair<int, int>> vec;
    
    vec.emplace_back(1,2);
    // creates a vector of size 5
    vector <int> v2(5, 3); // creates a vector of size 5 and initializes all the elements with 3
    //to copy vector
    vector <int> v3(v2); // to copy v2 to v3
    vector<int>:: iterator it = vec.begin(); // to create an iterator pointing to the memory
    cout<< *it << endl;
    it=it+2;
    cout<< *it << endl; // to print the value at the memory location
    // cout<< v.begin(); // to print the memory location

    


}