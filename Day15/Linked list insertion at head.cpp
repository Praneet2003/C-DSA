// You are using GCC
#include<iostream>
using namespace std;
struct Node
{
int data;
Node *next;
};
Node *head=NULL;
//insertion just after head.
void insert(int n){
Node *newNode= new Node;
newNode->data =n;
newNode->next=head;
head = newNode;
}
//Insertion at end one after the another node.
void insertAtEnd(int n)
{
Node *newNode= new Node;
newNode->data =n;
newNode->next=NULL;
if(head==NULL){
head=newNode;
}
Node *temp = head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newNode;
}

void insertAtPosition(int pos,int n){
Node *newNode= new Node;
newNode->data=n;
if(pos==1)
{
newNode->next=head;//head isiliye likha kyuki hmne head ko pehle hi null initialize kr rakha hai.
head=newNode;
return;
}
Node *temp = head;
for(int i=1; i<pos-1 && temp!=NULL; i++){
temp=temp->next;
}
if(temp==NULL){
return;
}
newNode->next=temp->next;
temp->next=newNode;
}


void deleteFirstNode(){
if(head==NULL){
cout<<"Nothing to delete"<<endl;
return;
}
Node *temp=head;
head=head->next;
delete temp;
}
void deleteLastNode(){
if(head==NULL){
cout<<"Nothing to delete"<<endl;
return;
}
if(head->next==NULL){
delete head;
head=NULL;
return;
}
Node *temp =head;
while(temp->next->next!=NULL){
temp=temp->next;
}
delete temp->next;
temp->next=NULL;
}
void deleteNodeAtPos(int pos){
if(head==NULL){
cout<<"nothing to delete"<<endl;
return;
}
Node *temp=head;
if(pos==1){
head=temp->next;
delete temp;
return;
}
for(int i=1; i<pos-1 && temp!=NULL; i++){
temp=temp->next;
}
if(temp==NULL || temp->next==NULL){
cout<<"does not exist"<<endl;
return;
}
Node *next=temp->next->next;
delete temp->next;
temp->next=next;
}
void print(){
cout<<"Data element in singly linked list are: ";
Node *temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
int main(){
insert(30);
insert(40);
//insertAtEnd(50);
//insertAtPosition(2,35);
//deleteFirstNode();
//deleteLastNode();
deleteNodeAtPos(2);
print();
return 0;
}