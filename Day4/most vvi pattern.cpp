#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while(row<=n){
        //print kro space
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        //print kro 1st triangle
        int col =1;
        while(col<=row){
            cout<<col;
            col++;
        }
        cout<<endl;
        row++;
    }
}