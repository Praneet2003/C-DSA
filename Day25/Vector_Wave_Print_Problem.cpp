#include<iostream>
#include<vector>
using namespace std;
void wavePrint(vector<vector<int>>& arr, int row, int cols){
    for (int c=0; c<cols; c++){
        if(c%2 == 0){
            //odd index i.e bottom to top print
            for(int r = 0; r<row; r++){
                cout<<arr[r][c]<<" ";
            }
            
        }else{
            for(int r = row-1; r>=0; r--){
                cout<<arr[r][c]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> v;//vector of vector i.e 2D vector.
    int n, m;
    cout<<"Enter the no of rows & columns: ";
    cin>>n>>m;
    v.resize(n, vector<int>(m));
    cout<<"Enter the elements of 2D vector: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>> v[i][j];
        }
    }
    wavePrint(v,n,m);
    return 0;
}