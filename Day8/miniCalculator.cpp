#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    char op;
    cout<<"Enter the Operation you would like to perform: "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<(a+b)<<endl;
        break;
    case '-':
    cout<<(a-b)<<endl;
    break;
    case '*':
    cout<<(a*b)<<endl;
    break;
    case '/':
    cout<<(a/b)<<endl;
    case '%':
    cout<<(a%b)<<endl;
    default:
    cout<<"Enter a valid Operator"<<endl;
        break;
    }
}
// /tmp/VW0TrA3cou.o
// enter the value of a: 23
// enter the value of b: 45
// Enter the Operation you would like to perform: 
// +
// 68


// === Code Execution Successful ===