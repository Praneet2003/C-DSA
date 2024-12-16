#include<iostream>
#include<stack>
using namespace std;
//implementation using array.
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int value){
        if(size-top>=1){//atleast one space available.
            top++;
            arr[top]= value;
        }else{
            cout<<"stack is overflow."<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack is underflow."<<endl;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout<<"Stack is underflow."<<endl;
        }
    }
    bool isEmpty(){
        if(top<0){
            return 1;
        }else{
            return 0;
        }
    }
};
int main(){
    
    int n;
    cout<<"Enter the no of elements to insert in stack: ";
    cin>>n;
    Stack s(n);//stack me size define krna necessary hai.
    int arr[n];
    for(int i=0;i<n;i++){
        // cin>>arr[i];
        int d;
        cin>>d;
        s.push(d);
    }
    int n2;
    cout<<"enter the no of elements you want to delete: ";
    cin>>n2;
    for(int i =0;i<n2;i++){
        s.pop();
    }
    // s.pop();
    // s.pop();
    cout<<"The top element of the stack is: "<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"The stack is empty.";
    }else{
        cout<<"Stack is not empty.";
    }
}