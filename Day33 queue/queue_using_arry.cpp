#include<iostream>
using namespace std;
class queue{
    int* arr;
    int front;
    int rear;
    int size;
    public:
    queue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int value){
        if(front==-1 && rear == -1){
            front++;
            arr[front]=value;
        }else if(front==rear){
            rear++;
            arr[rear]=value;
        }else{
            rear++;
        }
    }
    int frontElement(){
        if(front!=-1){
            return arr[front];
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    ~queue(){
        delete[] arr;
    }
};
int main(){
    cout<<"Enter the size of array: ";
    int n=5;
    queue q(n);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"The front element of array is: "<<q.frontElement();
    cout<<endl;
    q.print();
}