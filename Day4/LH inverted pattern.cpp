#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int S=n-row+1;
        while(S){
            cout<<"*";
            S--;
        }
        int col=1;
        while(col<=row){
            cout<<" ";
            col++;
        }
    row++;
    cout<<endl;
    }
}
// /tmp/EtlHu9yS4u.o
// Enter the value of n: 4
// **** 
// ***  
// **   
// *    


// === Code Execution Successful ===