#include <iostream>
#include <iomanip>

using namespace std;
// You are using GCC
void swap(int &x, int &y) {
    int t = x;
    x=y;
    y=t;
}

void minHeapify(int heap[], int size, int i) {
    // Type your code here
    int small=i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<= size && heap[left] < heap[small]){
        small = left;
    }
    if(right<= size && heap[right] < heap[small]){
        small = right;
    }
    if(small!=i){
        swap(heap[small],heap[i]);
        minHeapify(heap,size,small);
    }
}

void buildMinHeap(int heap[], int size) {
    //Type your code here
    for(int i=size/2; i>0; i--){
        minHeapify(heap,size,i);
    }
}

void insertElement(int heap[], int &size, int value) {
    //Type your code here
    size++;
    heap[size]=value;
    int i = size;
    while(i>1){
        int parent = i/2;
        if(heap[parent] > heap[i]){
            swap(heap[parent],heap[i]);
            i = parent;
        }else{
            // return;
            break;
        }
    }
}

void displayMinHeap(int heap[], int size) {
    //Type your code here
    for(int i=1;i<=size;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

double averageOfElements(int heap[], int size) {
    //Type your code here
    double sum =0.0;
    for(int i =1;i<=size;i++){
        sum+=heap[i];
    }
    return sum/size;
}
int main() {
    int n;
    cin >> n;

    int *heap = new int[n]; // Dynamic memory allocation for heap
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, size, value);
    }
    
    buildMinHeap(heap, size);
    displayMinHeap(heap, size);

    double average = averageOfElements(heap, size);
    cout << "Average: "<< fixed << setprecision(2)<< average;

    delete[] heap; // Free dynamically allocated memory
    return 0;
}