#include<iostream>
#include<stack>
using namespace std;
void insertRec(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
    }else{
        int num = s.top();
        s.pop();
        insertRec(s,x);
        s.push(num);
    }
}
stack<int> insert(stack<int>&s,int x){
    insertRec(s,x);
    // s.push(x);
    return s;
}
int main(){
    stack<int> ans;
    int n;
    cout<<"Enter the no of element you want to push inside the stack: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        ans.push(d);
    }
    int x;
    cout<<"enter the element you want ot insert At bottom: ";
    cin>>x;
    ans = insert(ans,x);
    int arr[n+1];
    for(int i=0;!ans.empty();i++){
        arr[i]=ans.top();
        ans.pop();
    }
    for(int i= n;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}