#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans,flag =0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<31;i++){
        ans = pow(2,i);
    if(ans==n){
        cout<<"Yes it is the power of 2"<<endl;
        flag = 1;
    }
    }
    if(flag==0){
            cout<<"Not the power of 2"<<endl;
        }
}