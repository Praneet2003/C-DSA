//you cant'use variable in place of size => Bad Practice.....
#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int min = INT8_MAX;//minimum ko max assign kr do 
    for(int i =0;i<n;i++){
        if(num[i]<min){
            min = num[i];//agar num[i] chota hoga to isme store hota jayega,
            //loop ke according yaha min value mil jayegi
        }
    }
    return min;
}
int getMax(int num[],int n){
    int max = INT8_MIN;
    for(int i =0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
        
    }
    return max;
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
// /tmp/DUAOXOBl5x.o
// Enter the size of array: 5
// -10 20 50 9 87
// The max value of elemnet present in the array is: 87
// The min value of elemnet present in the array is: -10

// === Code Execution Successful ===
