#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void insertAtHead(int n){
    Node *nextNode = new Node;
    nextNode->data = n;
    nextNode->next = head;
    nextNode->prev = NULL;
    // pehle head already present node pe point kr rha tha,
    if(head!=NULL){//agar LL null nhi hai to wo already present wale node ka prev ko newnode pe point kr dega.
        head->prev= nextNode;
    }
    head = nextNode;
}
void print(){
    Node *temp=head;
    cout<<"The elements of Linked List are: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    insertAtHead(10);
    insertAtHead(20);
    insertAtHead(40);
    print();
}