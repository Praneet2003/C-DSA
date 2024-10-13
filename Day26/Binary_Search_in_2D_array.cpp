#include<iostream>
#include<vector>
using namespace std;
bool BinarySearch(vector<vector<int>>& v, int target){
    int row = v.size();
    int col = v[0].size();

    int start =0;
    int end = row*col-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        int element = v[mid/col][mid%col];
        if(element==target){
            return 1;
        }if(element>target){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return 0;
}
int main(){
    vector<vector<int>> v;
    int n,m;
    cout<<"Enter the number of rows & columns: ";
    cin>>n>>m;
    cout<<"Enter the elements of vector: ";
    v.resize(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    //yaha vector/array ke lements sorted order me hone chahiye.
    int key;
    cout<<"Enter the key element: ";
    cin>>key;
    if(BinarySearch(v,key)){
        cout<<"Element found";
    }else{
        cout<<"Element is not found";
    }
}