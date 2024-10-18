#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head = nullptr;
    }
    void InsertAtHead(int n){
        Node *newnode = new Node(n);
        newnode->next = head;
        head = newnode;
    }
    void INsertAtEnd(int n){
        Node* newnode = new Node(n);
        if(head==nullptr){
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
}
    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout<< temp->data<<" -> ";
            temp=temp->next;
        }
    }
};
int main(){
    LinkedList l;
    int n;
    cout<<"Enter the no of element ot be inserted at the head of linked list: "<<endl;
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        l.InsertAtHead(d);
    }
    // cin>>n;
    cout<<"the element of linked list previosly present: "<<endl;
    l.display();
    cout<<endl;
    int k;
    cout<<"Enter the no of elements to insert at the end of the linked list: "<<endl;
    cin>>k;
    int d1;
    for(int i=0;i<k;i++){
        cin>>d1;
        l.INsertAtEnd(d1);
    }
    cout<<"The elements of the linked list after inserting few more element at the end: "<<endl;
    l.display();
}