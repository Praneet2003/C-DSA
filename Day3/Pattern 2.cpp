#include<iostream>
using namespace std;
int main(){
    int i =0;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    while(i<=n-1){
        int j = 1;
        while(j<=n){
            cout<<n-j+1;//For reverse printing.
            j++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
// /tmp/sBO8vVCmRS.o
// enter the value of n: 6
// 654321
// 654321
// 654321
// 654321
// 654321
// 654321


// === Code Execution Successful ===