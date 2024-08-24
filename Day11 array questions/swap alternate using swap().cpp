#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[20];
    cout<<"Enter the elements of array: ";
    for(int i = 0;i<n;i++){
        cin>>num[i];
    }
    swapAlternate(num,n);
    printArray(num,n);
}
// /tmp/DBbyHY2Gdc.o
// Enter the size of array: 7
// Enter the elements of array: 1 2 3 4 5 6 7
// 2 1 4 3 6 5 7 

// === Code Execution Successful ===