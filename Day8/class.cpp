// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    public :
    int a;
    float f;
}a1,a2;//objects of class A, both have two data feed a & f.
//to acess these data feed we use '.' operator.
int main() {
    a1.a=3;
    a1.f=4.56;
    cout<<a1.a<<endl;
    cout<<a1.f;
    return 0;
}
// /tmp/8rkDoN2h0H.o
// 3
// 4.56

// === Code Execution Successful ===