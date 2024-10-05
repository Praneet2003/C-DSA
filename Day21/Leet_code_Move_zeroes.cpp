//Sare zeroes ko right me rakhna hai.
#include<iostream>
#include<vector>
using namespace std;
vector <int> moveZeroes(vector <int> &v){
    int i=0;
    for(int j=0;j<v.size();j++){
        if(v[j]!=0){
            swap(v[j],v[i]);
            i++;
        }
    }
}
void print(vector <int> v){
    for(auto i: v){
        cout<<i<<" ";
    }
}
int main(){
    vector <int> v={0,1,0,3,12,0};
    moveZeroes(v);
    print(v);
}