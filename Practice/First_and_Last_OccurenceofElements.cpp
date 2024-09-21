#include<iostream>
using namespace std;
int firstOcc(int n,int arr[],int key){
    int start=0;
    int end=n-1;
    int ans=0;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int LastOcc(int n,int arr[],int key){
    int start=0;
    int end=n-1;
    int ans=0;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of key: ";
    cin>>k;
    int res = firstOcc(n,arr,k);
    int res2 = LastOcc(n,arr,k);
    if(res==res2){
        cout<<"Both First and the last occurence are same: "<<res<<endl;
    }else{
        cout<<"The first occurence of element "<<k<<" is: "<<res<<endl;
        cout<<"The last Occurenece of element "<<k<<" is: "<<res2<<endl;
    }
}