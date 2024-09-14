#include<iostream>
using namespace std;
int checkpalidrome(char arr[],char rev[],int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==rev[i]){
            flag++;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    char rev[n];
    int s=0;
    if(s<n){
        for(int i=i;i<n;i++){
        swap(arr[i],arr[n-i]);
        }
    }
    int sol = checkpalidrome(arr,rev,n);
    if(sol==n){
        cout<<"Yes ! it is palidrome string."<<endl;
    }else{
        cout<<"No ! it's not a palidrome."<<endl;
    }
}