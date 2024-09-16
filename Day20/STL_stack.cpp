//arrangment of plates , first in last out.
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Mehul");
    s.push("Ayush");
    s.push("Praneet");
    cout<<"The element at the top of stack is: "<< s.top()<<endl;
    s.pop();
    cout<<"The element at the top of stack is: "<< s.top()<<endl;
    cout<<"the size of stack is: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
}