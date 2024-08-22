#include<iostream>
using namespace std;
void printarray(int n, int arr[20],int i =0){
    for(int i =0;i<n;i++){
        arr[i]={2};
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the index of array: ";
    cin>>n;
    int array1[10]={10,20,30};
    printarray(n,array1);
    cout<<" "<<array1<<" "; 
}
// /tmp/O1vJGVvBVQ.o
// Enter the index of array: 9
// 2 2 2 2 2 2 2 2 2 
// 0 

// === Code Execution Successful ===