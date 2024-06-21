#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number to be verified: ";
    cin>>n;
    bool flag = 1;
    for(int i =2; i<n; i++){
        if(n%i==0){
            // cout<<"Not a Prime NUmber."<<endl;
            flag = 0;
            break;
        }
    }
    if(flag==0){
        cout<<n<<" is Not a prime Number";
    }else{
        cout<<n<<" is a Prime Number.";
    }
}
//Enter the Number to be verified: 5
// 5 is a Prime Number.
//Enter the Number to be verified: 14
// 14 is Not a Prime Number.
