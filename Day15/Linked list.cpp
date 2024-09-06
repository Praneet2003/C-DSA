#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int n){
        this -> data=n;
        this -> next = NULL;
    }
};
int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}
// /tmp/FwS27TlPJ1.o
// 10
// 0


// === Code Execution Successful ===