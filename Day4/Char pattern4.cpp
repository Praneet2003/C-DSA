#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        char i= 'A'+n-row;
        while(col<=row){
            cout<<i<<" ";
            i++;
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/iHgAwXpc68.o
// Enter the value of n: 4
// D 
// C D 
// B C D 
// A B C D 


// === Code Execution Successful ===