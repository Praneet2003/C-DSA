#include<iostream>
using namespace std;
void sum_arr(int arr[][3]){
    int sum =0;
    for(int i=0;i<3;i++){
        int j;
        for(j=0;j<3;j++){
            sum+=arr[i][j];
            //adding all the elemts of the particular row and storing in the sum
            arr[i][j]=sum;
        }
        cout<<"Row 1: "<<sum<<endl;
        sum=0;
    }
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The sum of each rows are: ";
    sum_arr(arr);
    cout<<"After Performing the Operation: "<<endl;
    cout<<"The alternate elements sum of 2D array: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}