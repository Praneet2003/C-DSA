#include<iostream>
using namespace std;
void insertionsrt(int n,int arr[]){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(arr[j+1]>key&&j>=0){
            arr[j+1]=arr[j];
            j--;
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
    insertionsrt(n,arr);
    printarray(n,arr);
}