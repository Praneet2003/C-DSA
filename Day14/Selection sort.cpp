#include<iostream>
using namespace std;
int selectionsort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    return 0;
}
void printarray(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(n,arr);
    printarray(n,arr);
}
// /tmp/aqP3uw0iz5.o
// enter the size of array: 6
// Enter the elements of array: 9 2 5 8 90 3
// 2 3 5 8 9 90 

// === Code Execution Successful ===