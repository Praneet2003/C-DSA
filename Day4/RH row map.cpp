#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int space = row-1,Star=row;;
        // while(space){
        //     cout<<" ";
        //     space=space-1;
        // }
        int col=1;
        while(col<=row){
            cout<<Star;
            col++;
            Star++;
        }
    row++;
    cout<<endl;
    }
}
// 1 2 3 4
//   2 3 4
//     3 4
//       4
