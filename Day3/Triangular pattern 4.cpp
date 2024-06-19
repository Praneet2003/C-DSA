#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col =1;
        while(col<=row){
            cout<<row-col+1<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}
// /tmp/x8RKKDzIKM.o
// Enter the value of n: 5
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 


// === Code Execution Successful ===