#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5] = {11,12,13,14,15};
    int k = 2;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
        // cout<<arr[i]<<" ";
    }

}