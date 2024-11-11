#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& s, int count, int size){
    //base case...
    if(count==size/2){
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    //Recursive call.
    solve(s,count+1,size);
    s.push(num);
}
void deleteMiddle(stack<int>& s,int n){
    int count=0;
    solve(s,count,n);
}
int main(){
    stack<int> s;
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        s.push(d);
    }
    int arr[n+1];
    deleteMiddle(s,n);
    for(int i=0;!s.empty();i++){
        arr[i]=s.top();
        s.pop();
    }
    for(int i=n-2;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}