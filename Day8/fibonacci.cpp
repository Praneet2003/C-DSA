// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void fibo(int n){
    int a = 0;
    int b = 1;
    int c;
    int i =1;
    cout<<a<<" ";
    cout<<b<<" ";
    while(i<=n){
        c = a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        i++;
    }
}
int main() {
    int n;
    cin>>n;
    fibo(n);
    return 0;
}
// /tmp/0fYhMoo9Xb.o
// 9
// 0 1 1 2 3 5 8 13 21 34 55 

// === Code Execution Successful ===