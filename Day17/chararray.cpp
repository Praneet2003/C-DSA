#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    //input of character array.
    char arr[n+1];
    cin>>arr;
    int i=0;
    //output of character array.
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
}
// /tmp/UpqXYRVRCt.o
// 7
// Praneet
// Praneet

// === Code Execution Successful ===