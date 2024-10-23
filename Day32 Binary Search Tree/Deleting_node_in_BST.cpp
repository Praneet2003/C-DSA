// #include<iostream>
// using namespace std;
// struct Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int d){
//         this->data = d;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };
// class BinarySearchTree{
//     Node* root;
//     Node* temp;
//     public:
//     BinarySearchTree(){
//         root = nullptr;
//     }
//     void insert(int value){
//         if(root == nullptr){
//             root = new Node(value);
//             return;
//         }else{
//             insertinBSTRec(root,value);
//         }
//     }
//     void insertinBSTRec(Node* node, int value){
//         if(value < node->data){
//             //agar inserting element ki value jada hai to right part me insert kro.
//             //else lft part me insert karo.
//             if(node->left == nullptr){
//                 node->left = new Node(value);
//             }else{
//                 insertinBSTRec(node->left,value);
//             }
//         }else{
//             if(node->right == nullptr){
//                 node->right = new Node(value);
//             }else{
//                 insertinBSTRec(node->right, value);
//             }
//         }
//     }
//     Node* mini(Node* node){
//         Node* current = node;
//         while(current && current->left != nullptr){
//             current = current->left;
//         }
//         return current;
//     }
//     int maxi(){
//         temp = root;
//         cout<<"The maximum value of node present is: ";
//         while(temp->right != nullptr){
//             temp = temp->right;
//         }
//         // cout<<temp->data<<" "<<endl;
//         return temp->data;
//     }
//     Node* deleteFromBST(int value){
//         if(root == nullptr){
//             return root;
//         }else{
//             deleteFromBSTRec(root, value);
//         }
//     }
//     Node* deleteFromBSTRec(Node* node, int value){
//         if(node->data==value){
//             //0 child:
//             if(node->left == nullptr && node->right == nullptr){
//                 delete root;
//                 return nullptr;
//             }
//             if(value< node->data){
//                 node->left = deleteFromBSTRec(node->left, value);
//             }else if(node->data< value){
//                 node->right = deleteFromBSTRec(node->right , value);
//             }else{
//                 if(node->left == nullptr){
//                     Node* temp = node->right;
//                     delete node;
//                     return temp;
//                 }else if(node->right == nullptr){
//                     Node* temp = node->left;
//                     delete node;
//                     return temp;
//                 }
//                 Node* temp = mini(node->right);
//                 node->data = temp->data;
//                 node->right = deleteFromBSTRec(node->right, temp->data);
//             }
//         }
//     }
//     void inorder(){
//         cout<<"Inorder Travesal: "<<endl;
//         inorderRec(root);
//     }
//     void inorderRec(Node* node){
//         if(node!=nullptr){
//             // left -> root -> right
//             inorderRec(node->left);
//             cout<<node->data<<" ";
//             inorderRec(node->right);
//         }
//     }
// };
// int main(){
//     BinarySearchTree bst;
//     bst.insert(1);
//     bst.insert(21);
//     bst.insert(17);
//     bst.insert(4);
//     bst.insert(51);
//     bst.insert(6);
//     bst.insert(7);
//     bst.deleteFromBST(21);
//     bst.inorder();
// }
//BST DELETION

#include <iostream>
using namespace std;

// Structure to define a binary tree node
struct Node {
int data;
Node* left;
Node* right;

Node(int value) : data(value), left(NULL), right(NULL) {}
};

// Class to represent a Binary Search Tree
class BinarySearchTree {
private:
 Node* root; // Root of the binary search tree

public:
BinarySearchTree() : root(NULL) {}

 // Function to insert a new node in the BST
void insert(int value) {
root = insertRec(root, value);
}

 // Recursive function to insert a new value
Node* insertRec(Node* node, int value) {
if (node == NULL) {
return new Node(value);
}
if (value < node->data) {
node->left = insertRec(node->left, value);
} else if (value > node->data) {
node->right = insertRec(node->right, value);
}
 return node; // Return the unchanged node pointer
}

 // Function to delete a node with a given value
void deleteNode(int value) {
    root = deleteRec(root, value);
}

 // Recursive function to delete a node
Node* deleteRec(Node* node, int value) {
    //base case 
    if (node == NULL) {
    return node; // Value not found
    }

    // Traverse the tree to find the node to delete
    if (value < node->data) {
        node->left = deleteRec(node->left, value);
    } else if (value > node->data) {
        node->right = deleteRec(node->right, value);
    } else {
        // Node found
        // Case 1: Node has no child
        if (node->left == NULL && node->right == NULL) {
            delete node;
            return NULL;
        }
        // Case 2: Node has one child
        if (node->left == NULL) {
            Node* temp = node->right;
                delete node;
                return temp;
        } else if (node->right == NULL) {
            Node* temp = node->left;
            delete node;
            return temp;
        }
        // Case 3: Node has two children
        Node* temp = findMin(node->right); // Find the inorder successor
        node->data = temp->data; // Replace data
        node->right = deleteRec(node->right, temp->data); // Delete the successor
        }
    return node; // Return the unchanged node pointer
}

 // Function to find the minimum value in a subtree
Node* findMin(Node* node) {
while (node && node->left != NULL) {
node = node->left;
}
return node;
}

 // In-order Traversal (Left, Root, Right)
void inorder() {
cout << "In-order Traversal: ";
inorderRec(root);
cout << endl;
}

 // Recursive function for in-order traversal
void inorderRec(Node* node) {
if (node != NULL) {
inorderRec(node->left);
cout << node->data << " ";
inorderRec(node->right);
}
}

 // Pre-order Traversal (Root, Left, Right)
void preorder() {
cout << "Pre-order Traversal: ";
preorderRec(root);
cout << endl;
}

 // Recursive function for pre-order traversal
void preorderRec(Node* node) {
if (node != NULL) {
cout << node->data << " ";
preorderRec(node->left);
preorderRec(node->right);
}
}

 // Post-order Traversal (Left, Right, Root)
void postorder() {
cout << "Post-order Traversal: ";
postorderRec(root);
cout << endl;
} 

 // Recursive function for post-order traversal
void postorderRec(Node* node) {
if (node != NULL) {
postorderRec(node->left);
postorderRec(node->right);
cout << node->data << " ";
}
}
};

int main() {
BinarySearchTree bst;

 // Insert nodes into the binary search tree
bst.insert(9);
bst.insert(8);
bst.insert(3);
bst.insert(823);
bst.insert(5);
bst.insert(7);

 // Perform tree traversals
bst.inorder();
// bst.preorder();
// bst.postorder();

 // Deleting a node
cout << "Deleting 3 from the tree." << endl;
bst.deleteNode(3);

 // Perform tree traversals after deletion
bst.inorder();
bst.preorder();
bst.postorder();

return 0;
}