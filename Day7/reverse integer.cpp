// Given a signed 32-bit integer x,
//  return x with its digits reversed.
//  If reversing x causes the value to
//  go outside the signed 32-bit integer
//  range [-231, 231 - 1], then return 0.
// Assume the environment does not 
// allow you to store 64-bit integers (signed or unsigned).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        if((ans>INT8_MAX/10)||(ans<INT8_MIN/10)){// ans *10 < (int _min/10)*10
            return 0;
        }
        ans = (10*ans)+digit;
    n/=10;
    }
    cout<<ans<<endl;
}