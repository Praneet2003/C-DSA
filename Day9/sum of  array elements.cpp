#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
int num[15];
int n;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the elements of the array: "<<endl;
for(int i=0;i<n;i++){
    cin>>num[i];
}
cout<<"The sum of all the elments of array is: "<<sum(num,n);
}
// /tmp/kzWmlaWbOh.o
// Enter the size of array: 7
// Enter the elements of the array: 
// -1 -3 4 5 -5 10 20
// The sum of all the elments of array is: 30

// === Code Execution Successful ===