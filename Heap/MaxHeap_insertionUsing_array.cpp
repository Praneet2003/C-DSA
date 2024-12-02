//max heapify insertion
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
    void print(int n){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    MaxHeap h;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        h.insert(d);
    }
    h.print(n);
}
