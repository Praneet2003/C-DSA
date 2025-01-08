#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>v){
    int s= 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int>v){
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(19);
    v.push_back(11);
    vector<int>ans= reverse(v);
//     for(auto i:ans){
//         cout<<i<<" ";
//     }
cout<<"Printing the reversed vector"<<endl;
print(ans);
}
