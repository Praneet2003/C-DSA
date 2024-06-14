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
            char res = 'A'+col-1;
            cout<<res<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/kSS3EjZc5H.o
// Enter the value of n: 5
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 


// === Code Execution Successful ===