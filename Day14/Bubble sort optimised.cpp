#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    // bool swaped= false;
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
        cout<<"Round Number: "<<i<<": ";
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
    int arr[n];//10 1 7 6 14 9 
    //the above array will be sorted in just two rounds so we will stop at there only.
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //bubble sort me hmesa sbse bda element sort hota hai.
    bubbleSort(arr,n);
    // cout<<"After Bubble shorting: "<<endl;
    // printarr(arr,n);
}
// /tmp/eIHFsUXaPz.o
// Enter the value of n: 6
// Enter the elements of array: 
// 10 1 7 6 14 9
// Round Number: 0: 1 7 6 10 9 14 
// Round Number: 1: 1 6 7 9 10 14 


// === Code Execution Successful ===