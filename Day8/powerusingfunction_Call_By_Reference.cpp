#include<iostream>
using namespace std;
int power(int *a, int *b);
int power(int *a, int *b){
    int ans = 1;
    for(int i =1;i<=*b;i++){
        ans*=*a;
    }
    return ans;
}
int main(){
    int d,c;
    cout<<"Enter the value of a: ";
    cin>>c;
    cout<<"Enter the value of b: ";
    cin>>d;
    int ans =  power(&c,&d);
    cout<<ans;
}