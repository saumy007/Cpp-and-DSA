#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
    int pivot =arr[s]; // definitng pivot element

    //count how many elements are smaller than pivot

    int count = 0;
    for(int i = s+1;i<=s;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //placing pivor at right element

    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    //left and right part

    int i = s,j = e;

    while(i<pivotIndex && j> pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;

}

void quickSort(int* arr,int s,int e){

//base case
if(s>=e)
return ;

//do partitiion

int p = partition(arr,s,e);

//left part sort

quickSort(arr,s,p+1);

//right part sort

quickSort(arr,p+1,e);
}
int main(){
    int arr[]={4,8,6,2,7,12,69,54};
    int size = 8;
    cout << "Array Before Sorting"<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    quickSort(arr,0,size-1);

    cout << "Array After Sorting"<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
}