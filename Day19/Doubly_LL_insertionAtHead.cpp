#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node *head = NULL;
void insertAtHead(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next=head;
    newNode->prev=NULL;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
}
void print(){
    Node *temp =head;
    cout<<"The elements of doubly linked list are: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    insertAtHead(50);
    insertAtHead(70);
    insertAtHead(90);
    insertAtHead(94);
    print();
}