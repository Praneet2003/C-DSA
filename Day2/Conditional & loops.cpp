#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    if(a>0){
        cout<<"a is a Positive number";
    }else{
        cout<<"a is a Negative number";
    }
    if(b>0){
        cout<<"b is a Positive number";
    }else{
        cout<<"b is a Negative number";
    }
    if(a>b){
        cout<<"a is greater than b";
    }else{
        cout<<"b is greater than a";
    }
}