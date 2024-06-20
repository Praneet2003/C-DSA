#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<row;
            col++;
        }
    row++;
    cout<<endl;
    }
}
// /tmp/hd5gVrFAUp.o
// Enter the value of n: 4
//    1
//   22
//  333
// 4444


// === Code Execution Successful ===