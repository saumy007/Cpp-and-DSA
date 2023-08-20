
#include<iostream>
#include<limits>
using namespace std;

bool isPresent(int arr[][2],int target, int row,int col){

    for(int row = 0; row < 2 ; row++){
        for (int col = 0; col < 2; col++){
            if(arr[row][col] == target){
                
                return 1;

            }
        }
    }

return 0;
}
// row wise sum
void PrintSum(int arr[][2], int row,int col){
    cout << "Printing Sum ->" << endl ;
    for(int row = 0; row < 2; row++){
        int sum = 0;
        for(int col = 0; col < 2; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout <<sum<< endl; 
}
void largestRowSum(int arr[][2], int row,int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
     for(int row = 0; row < 2; row++){
        int sum = 0;
        for(int col = 0; col < 2; col++){
            sum += arr[row][col];
        }

        if(sum>maxi){
            maxi = sum ;
            rowIndex = row;
        }
        cout<< "the maximum sum is " << maxi << endl;
        return rowIndex;    

}




int main(){
    //making 2d array
    int arr[2][2];

    for(int i = 0; i < 2 ; i++){
        for (int j = 0; j < 2; j++){
            cin >> arr[i][j]; 
        }
    }

    /*
    
    for(int i = 0; i < 2 ; i++){
        for (int j = 0; j < 2; j++){
            cout << arr[i][j] << "   " ; 
        }
    }
    
    */


   cout<< " enter the element to search for " << endl;
   int target;
   cin >> target;
   
  /* 
   if(isPresent(arr, target , 2,2)){
    cout << "Element Found " << endl;
   }
   else{
    cout<< " not Found " << endl;
   } 
   PrintSum(arr , 2,2);
*/
   int index = largestRowSum(arr , 2,2);
cout << " Maximum index is at " << index ;



return 0;
}