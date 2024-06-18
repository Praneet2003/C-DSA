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
            cout<<row;
            Star--;
        }
    row++;
    cout<<endl;
    }
}
// /tmp/tt3rDAXU88.o
// Enter the value of n: 4
// 1111
//  222
//   33
//    4


// === Code Execution Successful ===