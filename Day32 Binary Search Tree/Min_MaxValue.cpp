// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value){
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// class BST{
//     Node* root;
//     Node*temp;
//     public:
//     BST(){
//         root = nullptr;
//     }
//     void insert(int value){
//         if(root == nullptr){
//             root = new Node(value);
//             return;
//         }else{
//             InsertRec(root,value);
//         }
//     }
//     void InsertRec(Node* node, int value){
//         if(node->data > value){
//             if(node->left == nullptr){
//                 node->left = new Node(value);
//             }else{
//                 InsertRec(node->left,value);
//             }
//         }else{
//             if(node->right == nullptr){
//                 node->right = new Node(value);
//             }else{
//                 InsertRec(node->right,value);
//             }
//         }
//     }
//     void mini(){
//         temp = root;
//         cout<<"The minimum value of node present is: ";
//         while(temp->left!=nullptr){
//             temp = temp->left;
//         }
//         cout<<temp->data<<" "<<endl;
//     }
//     void maxi(){
//         temp = root;
//         cout<<"The maximum value of node present is: ";
//         while(temp->right != nullptr){
//             temp = temp->right;
//         }
//         cout<<temp->data<<" "<<endl;
//     }
//     bool search(int x){
//         temp = root;
//         if(root ==nullptr){
//             return false;
//         }
//         while(temp!=nullptr){
//             if(temp->data == x){
//                 return true;
//             }else{
//                 if(temp->data > x){
//                     temp = temp->left;
//                 }else{
//                     temp = temp->right;
//                 }
//             }
//         }
//         return 0;
//     }
//     void inorder(){
//         cout<<"Inorder Traversal: ";
//         inorderRec(root);
//         cout<<endl;
//     }
//     void inorderRec(Node* node){
//         if(node!=nullptr){
//             inorderRec(node->left);
//             cout<<node->data<<" ";
//             inorderRec(node->right);
//         }
//     }
// };
// int main(){
//     BST bt;
//     bt.insert(10);
//     bt.insert(4);
//     bt.insert(6);
//     bt.insert(14);
//     bt.insert(2);
//     bt.insert(30);
//     bt.inorder();
//     // if(bt.search(2)){
//     //     cout<<"!Hurey we found the element."<<endl;
//     // }else{
//     //     cout<<"! sorry we could not found the element"<<endl;
//     // }
//     bt.mini();
//     bt.maxi();
// }
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
class BST{
    Node* root;
    Node*temp;
    public:
    BST(){
        root = nullptr;
    }
    void insert(int value){
        if(root == nullptr){
            root = new Node(value);
            return;
        }else{
            InsertRec(root,value);
        }
    }
    void InsertRec(Node* node, int value){
        if(node->data > value){
            if(node->left == nullptr){
                node->left = new Node(value);
            }else{
                InsertRec(node->left,value);
            }
        }else{
            if(node->right == nullptr){
                node->right = new Node(value);
            }else{
                InsertRec(node->right,value);
            }
        }
    }
    void mini(){
        temp = root;
        cout<<"The minimum value of node present is: ";
        while(temp->left!=nullptr){
            cout<<temp->data<<" "<<endl;
            temp = temp->left;
        }
       // cout<<temp->data<<" "<<endl;
    }
    void maxi(){
        temp = root;
        cout<<"The maximum value of node present is: ";
        while(temp->right != nullptr){
            temp = temp->right;
        }
        cout<<temp->data<<" "<<endl;
    }
    bool search(int x){
        temp = root;
        if(root ==nullptr){
            return false;
        }
        while(temp!=nullptr){
            if(temp->data == x){
                return true;
            }else{
                if(temp->data > x){
                    temp = temp->left;
                }else{
                    temp = temp->right;
                }
            }
        }
        return 0;
    }
    void inorder(){
        cout<<"Inorder Traversal: ";
        inorderRec(root);
        cout<<endl;
    }
    void inorderRec(Node* node){
        if(node!=nullptr){
            inorderRec(node->left);
            cout<<node->data<<" ";
            inorderRec(node->right);
        }
    }
};
int main(){
    BST bt;
    bt.insert(10);
    bt.insert(4);
    bt.insert(6);
    bt.insert(14);
    bt.insert(2);
    bt.insert(30);
    bt.inorder();
    // if(bt.search(2)){
    //     cout<<"!Hurey we found the element."<<endl;
    // }else{
    //     cout<<"! sorry we could not found the element"<<endl;
    // }
    bt.mini();
    bt.maxi();
}
