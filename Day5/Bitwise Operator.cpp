#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
    int r1 = a&b;
    int r2 = a|b;
    int r3 = ~a;
    int r4 = ~b;
    int r5 = a^b;
    cout<<" a&b: "<<r1;
    cout<<" a|b: "<<r2;
    cout<<" ~a: "<<r3;
    cout<<" ~b: "<<r4;
    cout<<" a^b: "<<r5;
}
// /tmp/7XTbyXhij5.o
//  a&b: 4
//  a|b: 6
//  ~a: -5
//  ~b: -7
//  a^b: 2

// === Code Execution Successful ===