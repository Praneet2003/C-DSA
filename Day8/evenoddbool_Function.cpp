#include<iostream>
using namespace std;
bool isEven(int n){
    if(n&1){// if any no & with 1 give's 0 then, the number is Odd.
        return 0;//odd
    }else{
        return 1;//Even
    }
}
int main(){
    int a;
    cin>>a;
    if(isEven(a)){
        cout<<"Number is EVEN"<<endl;
    }else{
        cout<<"Number is ODD"<<endl;
    }
}
// /tmp/mzfWvnYGrJ.o
// 9
// Number is ODD


// === Code Execution Successful ===
