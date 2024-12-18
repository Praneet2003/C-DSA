//in circular singly linked list the last node point to the first node
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = nullptr;
    }
    ~Node(){
        int value = this->data;
        if(this->next !=nullptr){
            delete next;
            next = nullptr;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
//in circular linked list we dont need head pointer, we use tail pointer
void insertNode(Node* &tail,int val){
    Node* newnode = new Node(val);
    if(tail==nullptr){
        tail->next = tail;
        //single node khud ko hi point krega circular linked list bnaane ke liye.
        return;
    }
}