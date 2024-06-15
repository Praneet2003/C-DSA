#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    char i='A';
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<i<<" ";
            i++;
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/ahndjpmWtA.o
// Enter the value of n: 5
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 


// === Code Execution Successful ===