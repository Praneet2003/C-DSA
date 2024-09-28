#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {11,12,4,2,1};
    int n=5;
    int k=2;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=v[i];
    }
    v = temp;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}