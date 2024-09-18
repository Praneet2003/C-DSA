#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node *next;
    // Node *head = NULL;
    Node(int n){
        this ->data=n;
        this ->next = NULL;
    }
};
void insertAtHead(Node* &head,int n){
    Node* newnode=new Node(n);
    newnode -> next = head;
    head = newnode;
}
void print(Node * &head){
    Node *temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        // cout<<temp->next<<endl;
        temp = temp->next;
    }
}
int main(){
    //created a new node.
    // Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node *head = node2;
    print(head);
    // int n;
    // cin>>n;
    cout<<endl;
    insertAtHead(head,12);
    print(head);
    cout<<endl;
    insertAtHead(head, 15);
    print(head);
}
