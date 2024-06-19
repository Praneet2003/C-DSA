//Number of 1 Bits in a number
//Eg:- 5= 00000000........101. =>2 no of 1's Bit.
#include<iostream>
using namespace std;
int n;
int main(){
cout<<"Enter the value of n: ";
cin>>n;
}
class Solution{
    public:
    int homicWeight(uint32_t n){
        int count = 0;
        while(n!=0){
            //checking the last bit
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};