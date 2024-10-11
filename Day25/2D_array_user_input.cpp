#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    int arr1[r][c];
    //{{1,2,3,4},
    // {5,6,7,8},
    // {9,10,11,12}}
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            // cout<<arr[i][j]<<" ";
        }
    }
    cout<<"Row wise input: "<<endl;
    cout<<"The elements of 2d array are: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cin>>arr1[j][i];
            // cout<<arr[i][j]<<" ";
        }
    }
    cout<<"Col wise input: "<<endl;
    cout<<"The elements of 2d array are: "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }
// no of rows and columns: 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// Row wise input: 
// The elements of 2d array are:  
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 1 2 3 4 5 6 7 8 9 10 11 12
// Col wise input:
// The elements of 2d array are:  
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12

        //Initialization of 2D array
        int arr2[4][3]={{1,2,3},
                        {4,5,6},
                        {7,8,9},
                        {10,11,12}};
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                cout<<arr2[j][i]<<" ";
            }
            cout<<endl;
        }
}