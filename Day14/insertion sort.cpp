#include<iostream>
using namespace std;
void insertionsort(int n,int arr[]){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>key){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=key;
    }
}
void printarray(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the vaue of elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(n,arr);
    printarray(n,arr);
}
// /tmp/v7gT6kPfJT.o
// enter the value of n: 7
// Enter the vaue of elements: 10 1 7 4 8 2 11
// 1 2 4 7 8 10 11 

// === Code Execution Successful ===