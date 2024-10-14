//sieve of Erathostheness theorem:
//most efficient algorith to count the no of prime number.
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int countPrime(int n){
        if(n<2) return 0;
        int cnt =0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]= false;//0 & 1 are no prime so isko pehle hi non-prime mark kr diya.

        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j+=i){
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n to get the no of prime numbers: ";
    cin>>n;
    Solution s;
    int ans = s.countPrime(n);
    cout<<"The no of prime numbers are: "<<ans;
}