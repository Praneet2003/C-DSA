#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    int count =1;
    while(row<=n){
        int col=1;
        // int count =1;
        while(col<=row){
            cout<<count<<" ";
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
}
// /tmp/gfgp99oYqx.o
// 5 INput from user.
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 


// === Code Execution Successful ===