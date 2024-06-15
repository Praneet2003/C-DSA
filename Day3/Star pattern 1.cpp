#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){//No of row's ke equal print krna hai *, col ke andar.
            cout<<"* ";// ye while loop no of rows pe depend kr rha hai.
            col++;
        } 
        cout<<endl;
        row++;
    }
}
// /tmp/PhO3s30FsW.o
// 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 


// === Code Execution Successful ===