#include<iostream>
using namespace std;
void check(int n);
void check(int n){
    if(n%2==0){
        cout<<n<<" is an even number"<<endl;
    }else{
        cout<<n<<" is an odd number"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    check(a);
}