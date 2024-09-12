#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
// void insertAtEnd(int n){
//     Node *newNode = new Node;
//     newNode->data = n;
//     newNode->next = NULL;
//     newNode->prev = NULL;
//     if(head == NULL){
//         head = newNode;
//     }
//     Node *temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
// }
void insertAtEnd(int n)
{
 Node *newNode= new Node; 
    newNode->data =n;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
    }
Node *temp = head;
while(temp->next!=NULL){
    temp=temp->next;
}
    temp->next=newNode;
    newNode->prev=temp;
}
void print(){
    Node *temp = head;
    cout<<"The data elements of doubly linked list are: ";
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
}
int main(){
    insertAtEnd(90);
    insertAtEnd(26);
    insertAtEnd(45);
    insertAtEnd(67);
    print();
}