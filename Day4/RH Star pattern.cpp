#include<iostream>
using namespace std;
int main(){
    int n=4;
    int row =1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/vYXmCPPvGE.o
//    *
//   **
//  ***
// ****


// === Code Execution Successful ===