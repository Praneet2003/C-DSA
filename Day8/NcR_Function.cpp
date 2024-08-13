#include<iostream>
using namespace std;
int fact(int n){
    int fct=1;
    for(int i=1;i<=n;i++){
    fct*=i; 
    }
    return fct;
}
int nCr(int n, int r){
    int nume = fact(n);
    int deno = fact(r)*fact(n-r);
    int ans = nume/deno;
    return ans;
}
int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int res = nCr(n,r);
    cout<<res;
}
// /tmp/fQx2OpX4Q9.o
// Enter the value of n: 6
// Enter the value of r: 3
// 20

// === Code Execution Successful ===