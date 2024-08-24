#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;            
        }
    }
}
void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int num[20];
    cout<<"Enter the elements of array: ";
    for(int k=0;k<m;k++){
        cin>>num[k];
    }
    swapAlternate(num,m);
    printarray(num,m);
}
// /tmp/8Ew6U1eMRl.o
// Enter the value of m: 7
// Enter the elements of array: 1 2 3 4 5 6 7
// 2 1 4 3 6 5 7 

// === Code Execution Successful ===