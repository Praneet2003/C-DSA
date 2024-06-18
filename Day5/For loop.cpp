#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"printing count from 0 to n "<<endl;
    //for(intialization; condition; increment/Decrement);
    for(int i=0; i<=n;i++){
        cout<<i<<endl;
    } 
    return 0;
}