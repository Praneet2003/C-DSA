#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>& v){
    int count =0;
    int n= v.size();
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
            count++;
        }
    }if(v[n-1]>v[0]){
        count++;
    }
    return count<=1;
}
int main(){
    vector<int> v={1,2,3,4,5};
    vector<int> v1={3,5,7,1,6};
    vector<int> v2={3,3,3,3,3};
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    if(check(v)){
        cout<<"The vector v is sorted & Rotated"<<endl;
    }else{
        cout<<"The vector v in not sorted & rotated"<<endl;
    }
    if(check(v1)){
        cout<<"The vector v1 is sorted & Rotated"<<endl;
    }else{
        cout<<"The vector v1 in not sorted & rotated"<<endl;
    }
    if(check(v2)){
        cout<<"The vector v2 is sorted & Rotated"<<endl;
    }else{
        cout<<"The vector v2 in not sorted & rotated"<<endl;
    }
}
// /tmp/yeicsXQFsP.o
// The vector v is sorted & Rotated
// The vector v1 in not sorted & rotated
// The vector v2 is sorted & Rotated


// === Code Execution Successful ===