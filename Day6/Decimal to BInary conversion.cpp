//Decimal to Binary Conversion..
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;//isme bit nikalte hai.
        ans = (bit * pow(10,i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Answer is : "<< ans <<endl;
}
// /tmp/Cde5h4RNyG.o
// Enter the value of n: 7
// Answer is : 111


// === Code Execution Successful ===