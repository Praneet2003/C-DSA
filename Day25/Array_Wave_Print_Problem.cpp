#include<iostream>
using namespace std;
void WavePrint(int arr[][3], int r){
    int col=3;
    int row = r;
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter the No of rows & cols: ";
    cin>>n>>m;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    WavePrint(arr,n);
}
