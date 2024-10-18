#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class BinaryTree{
    private:
    Node* root;
    public:
    BinaryTree(){
        root = nullptr;
    }
    void insert(int val){
        if(root == nullptr){
            root = new Node(val); 
        }else{
            insertRec(root,val);
        }
    }
    void insertRec(Node* node,int val){
        if(node->left==nullptr){
            // insertRec(node->left,val);
            node->left = new Node(val);
        }else if(node->right==nullptr){
            node->right = new Node(val);
        }else{
            insertRec(node->left,val);
        }
    }
    void inorder(){
        cout<<"Inorder Travesal: "<<endl;
        inorderRec(root);
    }
    void inorderRec(Node* node){
        if(node!=nullptr){
            // left -> root -> right
            inorderRec(node->left);
            cout<<node->data<<" ";
            inorderRec(node->right);
        }
    }
};
int main(){
    BinaryTree b1;
    b1.insert(1);
    b1.insert(2);
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);
    b1.insert(6);
    b1.insert(8);
    b1.insert(9);
    b1.insert(10);
    b1.inorder();
}