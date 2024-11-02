#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    int len1= mid-s+1;
    int len2 = e-mid;
    //dynamically array bnaye hai.
    int *first = new int[len1];
    int *second = new int[len2];
    //copy kro value first aur second array me.
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
    //deleting the dynamically allocated memory.
    delete []first;
    delete []second;
}
void mergeSort(int *arr,int s,int e){
    //base case
    if(s>=e){//= isiliye hai kyuki single element already sorted hota hai
        return;
    }
    int mid = s+(e-s)/2;
    //left part sort krna hai
    mergeSort(arr,s,mid);
    //right part sort krna hai.
    mergeSort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s =0;
    int e = n-1;
    mergeSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}