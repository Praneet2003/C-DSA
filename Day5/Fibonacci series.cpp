//Fibonacci Series :
// 0,1,1,2,3,5,8,13,21.
// in the fibonacci series the sum of first two no is equal to the third number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a =0;
    int b =1;
    cout<<"The Fibonacci Series is: ";
    cout<<a<<" "<<b<<" "; 
    for(int i =1;i<=n;i++){//here i is used for denoting the no of terms.
        int nextNumber = a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber; 
    }
}
// /tmp/8klWuK5MSu.o
// Enter the value of n: 10
// The Fibonacci Series is: 0 1 1 2 3 5 8 13 21 34 55 89 

// === Code Execution Successful ===