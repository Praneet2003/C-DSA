#include<iostream>
using namespace std;
int main(){
    int row =1,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char res = 'A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<res<<" ";
            res++;
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}
// /tmp/PW59S6ipAR.o
// Enter the value of n: 5
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 


// === Code Execution Successful ===