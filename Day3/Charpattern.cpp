#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char res ='A'+row-1;
            cout<<res<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/2bTV5rp9vJ.o
// Enter the value of n: 5
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 


// === Code Execution Successful ===