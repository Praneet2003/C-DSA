#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        char i= 'A'+row+col-2;
        while(col<=row){
            cout<<i<<" ";
            i++;
            col++;
        }
        row++;
        cout<<endl;
    }
}
// /tmp/HK8jNTflu5.o
// Enter the value of n: 4
// A 
// B C 
// C D E 
// D E F G 


// === Code Execution Successful ===