#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <= n && arr[left]>arr[largest]){
        largest = left;
    }if(right <= n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void HeapSort(int arr[], int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    int size = n;
    while(size > 1){
        //step1:
        swap(arr[1],arr[size]);
        size--;
        //step2:
        heapify(arr,size,1);
    }
}
int main(){
    int arr[6] = {-1,54,53,55,52,50};
    int n=sizeof(arr)/sizeof(arr[0])-1;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"Max Heap"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    HeapSort(arr,n);
    cout<<"Array after Heap sort:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}