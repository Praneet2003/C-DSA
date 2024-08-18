#include<iostream>
using namespace std;
void reverseInt(int num[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<num[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[20];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"After Reversing the string:- "<<endl;
    reverseInt(num,n);
}
// /tmp/6W1k277rPk.o
// Enter the size of array: 10
// 1 2 3 4 5 6 7 8 9 10
// After Reversing the string:- 
// 10 9 8 7 6 5 4 3 2 1 

// === Code Execution Successful ===