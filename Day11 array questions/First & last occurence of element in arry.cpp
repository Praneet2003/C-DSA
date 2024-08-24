#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s =0,e=n-1;
    int ans=-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }else if(arr[mid]<key){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n, int key){
    int s =0,e=n-1;
    int ans=-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }else if(arr[mid]<key){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;    
}
int main(){
    int n;
    int num[n];
    cout<<"Enter the size of shorted array: ";
    cin>>n;
    int key;
    cout<<"Enter the value of the key element: ";
    cin>>key;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"The first occurence of the key element is: "<<firstOcc(num,n,key)<<endl;
    cout<<"The Last Occurence of the key element is: "<<lastOcc(num,n,key);
}