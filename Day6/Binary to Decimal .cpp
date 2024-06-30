//Binary to Decimal conversion....
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans =0;
    int i =0;
    while(n!=0){
        int digit = n%10;//isme digit nikalte hai..
        if(digit==1){
            ans = ans+pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;
}
// /tmp/Vso1lrzzEH.o
// Enter the value of n: 10101
// 21


// === Code Execution Successful ===