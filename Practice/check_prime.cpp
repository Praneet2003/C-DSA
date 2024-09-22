#include<bits/stdc++.h>

using namespace std;
bool checkPrime(int a){
    int n = sqrt(a);
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(checkPrime){
        cout<<"The number is not a prime number"<<endl;
    }else{
        cout<<"The number is not a prime number"<<endl;
    }
}