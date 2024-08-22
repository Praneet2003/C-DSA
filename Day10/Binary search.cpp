#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[10];
    cout<<"Enter the value's of array in Ascending Order: "<<endl;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int key;
    cout<<"Enter the value of key: "<<endl;
    cin>>key;
    int ans = BinarySearch(num,n,key);
    if(ans){
        cout<<"Congratulations! We Found the key at"<<ans<<endl;
    }else{
        cout<<"We were unable to Find the key............."<<endl;
    }
}