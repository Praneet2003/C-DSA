// You are using GCC
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
void solve(stack<int>&s, int count, int n){
    if(count == n/2){
        s.pop();
        return;
    }
    int d = s.top();
    s.pop();
    solve(s,count+1,n);
    s.push(d);
}
void DeleteMiddle(stack<int>&s, int n){
    int count =0;
    solve(s,count,n);
}
int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        s.push(i);
    }
    cout<<"Initial Stack: ";
    for(int i=n;i>0;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    DeleteMiddle(s,n);
    int arr[n-1];
    for(int i=0;!s.empty();i++){
        arr[i]=s.top();
        s.pop();
    }
    cout<<"Stack after Deletion: ";
    for(int i=n-2;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}