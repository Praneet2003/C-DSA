#include<iostream>
using namespace std;
int main(){
    int row =1;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(row<=n){
        int col =1;
        while(col<=n){
            char res = row+col+'A'-2;
            cout<<res<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}
// /tmp/n1gastthj8.o
// Enter the value of n: 5
// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I 


// === Code Execution Successful ===