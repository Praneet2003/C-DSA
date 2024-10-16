#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor to insert values.
    Node(int n){
        this->data =n;
        this->next = nullptr; 
    }
};
class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head = nullptr;
    }
    void insertAtHead(int n){
        Node *newnode = new Node(n);
        newnode->next = head;// agar koi element already present hai to jaha 
        //pehle head point kr rha tha ab waha newnode ka next point krega.
        head = newnode;
    }
    void print(){
        Node *temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of elements to insert in linked List At head: ";
    cin>>n;
    LinkedList l;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        l.insertAtHead(data);
    }
    l.print();
}