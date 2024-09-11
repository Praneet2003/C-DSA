#include<iostream>
using namespace std;
bool checkpalindrom(int n,char arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    if(checkpalindrom(n,arr)){
        cout<<"The word is a palindrom type."<<endl;
    }else{
        cout<<"The word is not a palindrom type."<<endl;
    }
}
// /tmp/r8ZTQeOJqQ.o
// 5
// NitiN
// The word is a palindrom type.


// === Code Execution Successful ===