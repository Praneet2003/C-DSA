#include<iostream>
#include<vector>
using namespace std;
bool SearchMatrix(vector<vector<int>>& v,int target){
    int row = v.size();
    int col = v[0].size();

    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex<row && colIndex<col){
        int element = v[rowIndex][colIndex];
        if(element==target){
            return 1;
        }else if(element < target){
            rowIndex++;
        }else if(element > target){
            colIndex--;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>> v;
    int n,m;
    cout<<"Enter the no of rows & columns of vector: ";
    cin>>n>>m;
    v.resize(n,vector<int>(m));
    cout<<"enter the elements of vector: ";
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int key;
    cout<<"Enter the target element: ";
    cin>>key;
    if(SearchMatrix(v,key)){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
}