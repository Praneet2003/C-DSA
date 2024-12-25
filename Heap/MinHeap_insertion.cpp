#include<iostream>
using namespace std;
class MINHeap{
    public:
    int arr[100];
    int size = 0;
    void insert(int val){
        size++;
        int i=size;
        arr[size]=val;
        while(i>1){// for 1 based indexing 
            int parent = i/2;
            if(arr[parent]>arr[i]){
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
};
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    MINHeap h;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        h.insert(d);
    }
    h.print();
}
