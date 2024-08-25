#include<iostream>
using namespace std;
int main(){
    int i =7; 
    int i1 = 10;
    cout<<"Pre-increment : "<<++i<<endl;
    cout<<"Post-increment : "<<i++<<endl;
    cout<<"Post-Decrement : "<<i1--<<endl;
    cout<<"Pre-Decrement : "<<--i1<<endl;
    int a =10,b=1;
    if(++a){
        cout<<b;
    }else{
        cout<<++b;
    }
}
// /tmp/9ZGTVvuq8v.o
// Pre-increment : 8
// Post-increment : 8
// Post-Decrement : 10
// Pre-Decrement : 8
// 1

// === Code Execution Successful ===