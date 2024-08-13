#include<iostream>
using namespace std;
int main(){
    char ch = '1';
    int num = 2;
    switch (ch)
    {
    case 1: 
    cout<<"first case"<<endl;
    cout<<"first Number"<<endl;
        break; 
    case '1':switch (num)
    {
    case 1: cout<<"the number is"<<num<<endl;
        break;
    case 2: cout<<"the number is"<<num<<endl;    
    default:
    cout<<"Number not matched"<<endl;
        break;
    }
    default:
    cout<<"This is the default case";
        break;
    }
}
// /tmp/L3Na9f2SRj.o
// the number is2
// Number not matched
// This is the default case

// === Code Execution Successful ===