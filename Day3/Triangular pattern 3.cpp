// /tmp/uCVTdciYr3.o
// Enter the value of n: 9
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 
// 6 7 8 9 10 11 
// 7 8 9 10 11 12 13 
// 8 9 10 11 12 13 14 15 
// 9 10 11 12 13 14 15 16 17 


// === Code Execution Successful ===
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col =1;
        int count = row;
        while(col<=row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}