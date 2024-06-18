// For Loop with multiple variable's and condition's...
#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
}
//
// Output:
// 0 1 2