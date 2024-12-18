#include<bits/stdc++.h>
using namespace std;
void print(int n,int arr[]);
void Selection(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        cout<<"Round: "<<i<<endl;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                print(n,arr);
                cout<<endl;
            }
        }
        cout<<endl;
    }
    cout<<endl<<"By using Selection sort: "<<endl;
}
void bubbleSort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        cout<<"Round: "<<i<<endl;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }  
        }
        print(n,arr);
            cout<<endl;
    }
    cout<<endl<<"Using Bubble Sort: "<<endl;
}
void insertionSort(int n,int arr[]){
    for(int i=1;i<n;i++){
        int key = arr[i];
        // cout<<"Round: "<<i<<endl;
        int j=i-1;
        for(int j;j>=0;j--){
            if(arr[i]>key){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        arr[j+1]=key;
        print(n,arr);
        }
        cout<<"Round: "<<i<<endl;// printing the round no at each iteration. 
        // print(n,arr);
        cout<<endl;
    }
}
void print(int n,int arr[]){
    // cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Selection(n,arr);
    bubbleSort(n,arr);
    // insertionSort(n,arr);
    cout<<"After Completly sorting: "<<endl;
    print(n,arr);
}
