#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int maxi=INT32_MAX;
    // int ans=0;
    for(int i=0;i<n;i++){
        int maxi= max(maxi,arr[i]);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"The peak element of mountain is: "<<peak(num,n);
}