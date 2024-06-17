#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){//No of row's ke equal print krna hai *, col ke andar.
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}
// /tmp/TQzxf7Olso.o
// 5
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 


// === Code Execution Successful ===