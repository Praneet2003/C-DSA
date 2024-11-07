#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        this->data= n;
        this->next = nullptr;
    }
};
class LinkedList{
    Node *head;
    public:
    LinkedList(){
        head = nullptr;
    }
    void InsertAtHead(int n){
        Node *newnode = new Node(n);
        newnode->next = head;
        head= newnode;
    }
    void insertATPos(int n,int pos){
        Node* newnode = new Node(n);
        if(pos==1){
            newnode->next=head;
            head = newnode;
            return ;
        }
        Node *temp = head;
        for(int i=0;i<pos-1 && temp!=nullptr;i++){
            temp = temp->next;
        }
        if(temp->next = nullptr){
            InsertAtEnd(n);
        }
        if(temp==nullptr){
            cout<<"The inserted position is out of bond!"<<endl;
            return;
        }
        newnode->next=temp->next;
        temp->next = newnode;
    }
    void InsertAtEnd(int n){
        Node *newnode = new Node(n);
        if(head==nullptr){
            head = newnode;
            return;
        }else{
            Node *temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            temp->next=newnode;
        }
    }
    void DeletingFirstNode(){
        Node*temp = head;
        head = head->next;
        delete temp;
    }
    void DeletingNodeAtPos(int pos){
        if(pos==1){
            Node *temp = head;
            head = head->next;
            delete temp;
        }else{
            Node* temp = head;
            Node* prev = nullptr;
            for(int i=0;i<pos;i++){
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
    }
    void display(){
        Node* temp = head; 
        cout<<"The Elements present in the linked list are: "<<endl;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl; 
    }
};
int main(){
    LinkedList l;
    int n;
    cout<<"Enter the no of elements to insert at head: "<<endl;
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        l.InsertAtHead(d);
    }
    l.display();
    cout<<endl;
    int k;
    cout<<"Enter the no of elements to insert at End: "<<endl;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>d;
        l.InsertAtEnd(d);
    }
    l.display();
    // int k;
    cout<<"Enter the no of elements to insert at Specific pos: "<<endl;
    cin>>k;
    int pos;
    cout<<"Enter to position at which you want to insert the lement: "<<endl;
    cin>>pos;
    for(int i=0;i<k;i++){
        cin>>d;
        l.insertATPos(d,pos);
    }
    l.display();
    cout<<"Enter the position you want ot delete: ";
    int pos1;
    cin>>pos1;
    l.DeletingNodeAtPos(pos1);
    // l.DeletingFirstNode();
    cout<<"Element of Linked LIst after deleting fist node:"<<endl;
    l.display();
}