#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }cout<<"Round Number: "<<i<<": ";
        for(int k=0;k<n;k++){
        
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    }
}
// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //bubble sort me hmesa sbse bda element sort hota hai.
    bubbleSort(arr,n);
    // cout<<"After Bubble shorting: "<<endl;
    // printarr(arr,n);
}