//Calculate the difference b/w Product & sum of all digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int product =1;
    int sum =0;
    while(n>0){
        int P=n%10;
        n=n/10;
        sum+=P;
        product*=P;
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Product is: "<<product<<endl;
    cout<<"The Difference is: "<<product-sum<<endl;
    return 0;
}
// /tmp/M8ECdGDfCh.o
// Enter the value of n: 243
// Sum is: 9
// Product is: 24
// The Difference is: 15


// === Code Execution Successful ===