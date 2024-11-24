//hasing is prestoring and fetching
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array number"<<endl;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        
    }
// precompute
    int hash[13] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Enter the which are compute number"<<endl;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
    //fetch method
    cout << hash[number]<<endl;

    }

return 0;
}