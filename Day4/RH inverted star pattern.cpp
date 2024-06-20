#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int space = row-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        int Star=n-row+1;
        while(Star){
            cout<<"*";
            Star--;
        }
    row++;
    cout<<endl;
    }
}
// /tmp/UFngLle0FP.o
// Enter the value of n: 4
// ****
//  ***
//   **
//    *


// === Code Execution Successful ===