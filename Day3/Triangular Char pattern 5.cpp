#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<'A'+row-1<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/FQv4NzDrca.o
// Enter the value of n: 5
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 


// === Code Execution Successful ===