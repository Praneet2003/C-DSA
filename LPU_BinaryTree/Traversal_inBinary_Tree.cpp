// #include<iostream>
// using namespace std;
// struct Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value){
//         data = value;
//         left= nullptr;
//         right = nullptr;
//     }
// };
// class BinaryTree{
//     private:
//     Node* root;
//     public:
//     BinaryTree(){
//         root = nullptr;
//     }
//     void insert(int value){
//         if(root == nullptr){
//         root = new Node(value);
//         }else{
//             insertRec(root,value);
//         }
//     }
//     void insertRec(Node* node , int value){
//         if(node->left==nullptr){
//             node->left = new Node(value);
//         }else if(node->right == nullptr){
//             node->right = new Node(value);
//         }else{
//             insertRec(node->left,value);
//         }
//     }
//     //IN-order traversal
//     void inorder(){
//         cout<<"In-order Traversal: "<<endl;
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
//     void preorder(){
//         cout<<"Pre-order Traversal: "<<endl;
//         preorderRec(root);
//         cout<<endl;
//     }
//     void preorderRec(Node* node){
//         if(node!=nullptr){
//             cout<<node->data<<" ";
//             preorderRec(node->left);
//             preorderRec(node->right);
//         }
//     }
//     void postorder(){
//         cout<<"Post order Traversal: "<<endl;
//         postorderRec(root);
//         cout<<endl;
//     }
//     void postorderRec(Node* node){
//         if(node!=nullptr){
//             postorderRec(node->left);
//             postorderRec(node->right);
//             cout<<node->data<<" ";
//         }
//     }
// };
// int main(){
//     BinaryTree bt;
//     // bt.insert(10);
//     // bt.insert(20);
//     // bt.insert(30);
//     // bt.insert(40);
//     // bt.insert(50);
//     // //
//     // bt.inorder();
//     // bt.preorder();
//     // bt.postorder();
//     int n;
//     cin>>n;
//     int d;
//     for(int i=0;i<n;i++){
//         cin>>d;
//         bt.insert(d);
//     }
//     bt.inorder();
// }
// You are using GCC
#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
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
    void insert(int value){
        if(root == nullptr){
            root = new Node(value);
        }else{
            insertRec(root,value);
        }
    }
    void insertRec(Node* node, int value){
        if(node->left == nullptr){
            node->left = new Node(value);
        }else if(node->right == nullptr){
            node->right = new Node(value);
        }else{
            insertRec(node->left, value);
        }
    }
    void inorder(){
        cout<<"Inorder traversal: ";
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
    int n;
    cin>>n;
    int d;
    BinaryTree b;
    for(int i=0;i<n;i++){
        cin>>d;
        b.insert(d);
    }
    b.inorder();
    
}