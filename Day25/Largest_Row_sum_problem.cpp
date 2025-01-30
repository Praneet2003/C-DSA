#include<iostream>
using namespace std;
int LargestSum(int arr[][3]){
        int row = -1;//ye row no ko store krega jiska sum ka value sbse jada hoga.
        int maxi = INT16_MIN;
    for(int i=0;i<3;i++){
        int sum =0;
        
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            row =1;
        }
    }
    cout<<"The maximum sum of row is: "<<maxi<<" from row number "<<row;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    LargestSum(arr);
}