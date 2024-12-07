#include<iostream>
using namespace std;
class MaxHeap{
    public:
    int arr[100];
    int size =0;
    void insert(int val){
        size = size+1;
        int i=size;
        arr[i]=val;
        while(i>1){
            int parent = i/2;
            if(arr[parent]<arr[i]){
                swap(arr[parent],arr[i]);
                i=parent;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left < n && arr[left]>arr[largest]){
        largest = left;
    }if(right < n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
    void deleteRootFromMaxHeap(int n){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        //placing root into its right place.
        while(i<size){
            int leftchild = 2*i;
            int rightchild = (2*i)+1;
            if(leftchild < size && arr[i]<arr[leftchild] && arr[leftchild]>arr[rightchild]){
                swap(arr[i],arr[leftchild]);
                i=leftchild;
            }else if(rightchild < size && arr[i]<arr[rightchild] &&arr[leftchild]<arr[rightchild]){
                swap(arr[i],arr[rightchild]);
                i = rightchild;
            }else{
                return;
            }
        }
        heapify(arr,n,1);
    }
};
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    // cin>>n;
    n=5;
    MaxHeap h;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        h.insert(d);
    }
    h.print();
    h.deleteRootFromMaxHeap(n);
    cout<<"The Max Heap after deleting Root Node: "<<endl;
    h.print();
}