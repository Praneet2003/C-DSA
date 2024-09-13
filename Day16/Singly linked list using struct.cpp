#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    
    
};
    void insertAtHead(int n){
        Node *head = NULL;//Initially haed null rahega.
        Node *temp=head;
        //creating a new node.
        Node* node1 = new Node;
        temp=node1;
        node1->data=n;
        node1->next=NULL;
        if(head==NULL){
            head = node1;
        }else{
            // temp->next=node1;
            head = node1;
            temp->next = node1;
        }
    }
    void print(){
        Node *head = NULL;
        Node *temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
int main(){
    cout<<"First node insertion: "<<endl;
    insertAtHead(10);
    print();
    cout<<"Second node Insertion"<<endl;
    insertAtHead(20);
    print();
}