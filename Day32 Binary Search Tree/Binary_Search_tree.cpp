#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};
class BinarySearchTree{
    Node* root;
    public:
    BinarySearchTree(){
        root = nullptr;
    }
    void insert(int value){
        if(root == nullptr){
            root = new Node(value);
            return;
        }else{
            insertinBSTRec(root,value);
        }
    }
    void insertinBSTRec(Node* node, int value){
        if(value < node->data){
            //agar inserting element ki value jada hai to right part me insert kro.
            //else lft part me insert karo.
            if(node->left == nullptr){
                node->left = new Node(value);
            }else{
                insertinBSTRec(node->left,value);
            }
        }else{
            if(node->right == nullptr){
                node->right = new Node(value);
            }else{
                insertinBSTRec(node->right, value);
            }
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
    BinarySearchTree bst;
    // int d;
    // cin>>d;
    // while(d!=-1){
    //     int data;
    //     cin>>data;
    //     bst.insert(data);
    // }
    bst.insert(1);
    bst.insert(21);
    bst.insert(17);
    bst.insert(4);
    bst.insert(51);
    bst.insert(6);
    bst.insert(7);
    bst.inorder();
}