#include<stack>
#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        this->top=-1;
        arr = new int[size];
    }
    void push(int val){
        if(size-top>1){
            top++;
            arr[top]=val;
        }else{
            cout<<"The stack is overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack is underflow";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"The stack is empty";
            return -1;
        }
    }
    bool isempty(){
        if(top==1){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Stack st(5);
    st.push(20);
    st.push(21);
    st.push(22);
    st.push(31);
    cout<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"The stack is empty"<<endl;
    }else{
        cout<<"The stack is not empty"<<endl;
    }
}