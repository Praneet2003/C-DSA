//Decimal to Binary Conversion..
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans = 0;
    int i = 0;
    while(n != 0){
        
        int bit = n & i;
        ans = (bit * pow(10,i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Answer is : "<< ans <<endl;
}