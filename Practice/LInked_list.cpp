#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        this->data=n;
        this->next=nullptr;
    }
};
class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        head = nullptr;
    }
    void insertAthead(int n){
        Node *newnode = new Node(n);
        
        newnode->next=head;
        head = newnode;
    }
    void insertAtEnd(int n){
        Node *newnode = new Node(n);
        if(head==nullptr){
            head = newnode;
            // newnode->next=head;
            return;//retunr krna necessary hai. jisse loop se if statement se bahar nikal paye.
        }else{
            Node*temp =head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next = newnode;
            // newnode->next=nullptr;
        }
    }
    void insertAtpos(int n,int pos){
        Node *newnode = new Node(n);
        if(pos==1){
            newnode->next=head;
            head = newnode;
            return;
        }else{
            Node* temp=head;
            for(int i=0;i<pos-1 && temp!=nullptr;i++){
                temp=temp->next;
            }
            if(temp==nullptr){
                cout<<"Position out of bounds"<<endl;
                return;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }

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
    int n,a,b,pos,c;
    LinkedList obj;
    cin>>n;
    // int a;
    
    for(int i=0;i<n;i++){
        cin>>a;
        // cout<<a<<" ";
        obj.insertAtEnd(a);
    }
    cin>>b>>pos;
    obj.insertAtpos(b,pos);
    cin>>c;
    obj.insertAthead(c);
    obj.display();
}