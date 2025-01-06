#include<iostream>
using namespace std;
int peakElement(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
    return arr[s];
}
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"The element is at index: "<<peakElement(num,n);
}