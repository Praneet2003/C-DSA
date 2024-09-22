#include<iostream>
using namespace std;
int print(){
    int a=5;
    return a++ ;
}
int main(){
    // int n;
    // cin>>n;
    // int x = print(n);
    cout<<print()<<endl;
    cout<<print()<<endl;
    cout<<print()<<endl;
    cout<<print()<<endl;
    cout<<print()<<endl;
}