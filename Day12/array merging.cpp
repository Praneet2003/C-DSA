// merge two arrays
#include<iostream>
using namespace std;
int mergeArray(int n1,int arr1[],int n2,int arr2[],int mergedArray[]){
    for(int i=0;i<n1;i++){
        mergedArray[i]=arr1[i];
    }for(int i=0;i<n2;i++){
        mergedArray[n1+i]=arr2[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int j=0;j<m;j++){
        cin>>arr2[m];
    }
    int mergedarr[n+m];
    mergeArray(n,arr1,m,arr2,mergedarr);
    cout<<"The merged array is: "<<endl;
    for(int i=0;i<n+m;i++){
        cout<<mergedarr[i];
    }
}
