#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"Element at the top is: ";
    cout<<s.top();
    cout<<endl;
    if(s.empty()){
        cout<<"stack is empty."<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"The size of stack is: "<<s.size()<<endl;
    for(int i=0;i<s.size();i++){
    // cout<<s;
    }
}