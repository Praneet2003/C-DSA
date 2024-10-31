#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->prev = nullptr;
        this->next = nullptr;
    }
    // ~Node(){
    //     int val = this->data;
    //     if(next!=nullptr){
    //         delete next;
    //         next = nullptr;
    //     }
    //     cout<<"Memory free for node with data-> "<<val;
    // }
};
class LinkedList{
    Node* head;
    public:
    LinkedList(){
        head = nullptr;
    }
    void insertAthead(int val){
        Node* newnode = new Node(val);
            newnode->next=head;
            if(head!=nullptr){
                head->prev = newnode;
            }
            head=newnode;
    }
    void insertAtEnd(int val){
        Node* newnode = new Node(val);
            if(head == nullptr){
                insertAthead(val);
                return;
            }
            Node* temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
        temp->next = newnode;
        newnode->prev=temp;
    }
    void insertAtPos(int val, int pos){
        if(pos == 1){
            insertAthead(val);
            return;
        }
        Node* temp = head;
        int cnt=1;
        while(cnt < pos-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==nullptr ){
            insertAtEnd(val);
            return;
        }
        Node* newnode = new Node(val);
        newnode->next = temp->next;
        temp->next->prev=newnode;  
        temp->next = newnode;
        newnode->prev = temp;
    }
    void deleteFirstNode(){
        if(head == nullptr){
            return;
        }
        Node*temp = head;
        // head = head->next;
        if(head!=nullptr){
        Node*temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
    }
        delete temp;
    }
    void deleteLastNode(){
        if(head==nullptr){
            return;
        }
        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->prev->next = nullptr;
        temp->prev = nullptr;
        temp->next = nullptr;
        delete temp;
    }
    void print(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void deleteNodeAtPos(int pos){
        if(head==nullptr || pos<=0){
            return;
        }
        if(pos==1){
            deleteFirstNode();
            return;
        }
        Node* temp = head;
        for(int i=1; i<pos && temp!=nullptr;i++){
            temp=temp->next;
        }
        if(temp==nullptr){
            cout<<"Position is out of bounds"<<endl;
            return;
        }
        if(temp->next!=nullptr){
            temp->next->prev = temp->prev;
        }
        if(temp->prev!=nullptr){
            temp->prev->next = temp->next;
        }
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
    }
    int getlength(){
        Node* temp=head;
        int count=0;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
            count++;
        }
        return count;
    }
};
int main(){
    LinkedList l;
    l.insertAthead(10);
    l.insertAthead(20);
    l.insertAthead(30);
    l.insertAthead(40);
    l.insertAtEnd(50);
    l.insertAtEnd(60);
    l.insertAtEnd(70);
    l.insertAtEnd(80);
    l.insertAtEnd(90);
    l.insertAtPos(100,2);
    l.insertAtPos(440,4);
    l.insertAtPos(2200,12);
    l.deleteFirstNode();
    l.deleteLastNode();
    l.deleteNodeAtPos(1);
    l.deleteNodeAtPos(2);
    l.print();
    cout<<"NULL";
}