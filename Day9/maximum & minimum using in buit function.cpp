//you cant'use variable in place of size => Bad Practice.....
#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int mini = INT8_MAX;//minimum ko max assign kr do 
    for(int i =0;i<n;i++){
        // if(num[i]<min){
        //     min = num[i];
        // }
        mini = min(mini,num[i]);//in-built function
    }
    return mini;
}
int getMax(int num[],int n){
    int maxi = INT8_MIN;
    for(int i =0;i<n;i++){
        // if(num[i]>max){
        //     max = num[i];
        // }
        maxi = max(maxi,num[i]);//in-built function
    }
    return maxi;
}
int main(){
    int n;//n is size of array.
    cout<<"Enter the size of array: ";
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"The max value of elemnet present in the array is: "<<getMax(num,n)<<endl;
    cout<<"The min value of elemnet present in the array is: "<<getMin(num,n);
    return 0;
}
// /tmp/fw59EX7HoX.o
// Enter the size of array: 5
// -8 9 10 20 49
// The max value of elemnet present in the array is: 49
// The min value of elemnet present in the array is: -8

// === Code Execution Successful ===