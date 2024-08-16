#include<iostream>
using namespace std;
bool CheckPrime(int n){
    for(int i = 2;i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
return 1;
}

int main(){
    int a;
    cin>>a;
    if(CheckPrime(a)){
        cout<<a<<" is not a Prime Number"<<endl;
    }else{
        cout<<a<<" is a Prime Number"<<endl;
    }
}
// /tmp/6balWtNr8s.o
// 57
// 57 is a Prime Number


// === Code Execution Successful ===