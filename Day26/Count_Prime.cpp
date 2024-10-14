#include<iostream>
using namespace std;
using namespace std;
class Solution{
    bool isprime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    public:
    int countPrime(int n){
        int cnt=0;
        for(int i=2;i<n;i++){
            if(isprime(i)){
                cnt++;
            }
        }
        return cnt;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Solution s;
    cout<<"The number of count is: "<<s.countPrime(n);
}
//this solution is also ok but it gives TLE error.