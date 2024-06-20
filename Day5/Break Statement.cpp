// Importance of Break Statement........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i =1;
    for(; ;){
        if(i<=n){
            cout<<i<<endl;
        }else{
            break;//Break keyword takes you out from the current loop..
        }
        i++;
    }
}