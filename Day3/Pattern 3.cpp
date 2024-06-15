#include<iostream>
using namespace std;
int main(){
    int i =0;
    int n,count=1;
    cout<<"enter the value of n: ";
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";//For printing the count.
            j++;
            count++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
// /tmp/xvNnoQ4K58.o
// enter the value of n: 4
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 
// 17 18 19 20 


// === Code Execution Successful ===