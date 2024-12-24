
// /BST
// You are using GCC
#include <iostream>
using namespace std;

// Structure to define a binary tree node
struct Node {
int data;
Node* left;
Node* right;

Node(int value) : data(value), left(NULL), right(NULL) {}
};

// Class to represent a Binary Tree
class BST {
private:
Node* root; // Root of the binary tree

public:
BST() : root(NULL) {}

// Function to insert a new node in the binary tree
void insert(int value) {
    if (root == NULL) {
        root = new Node(value);
    } else {
        insertRec(root, value);
    }
}

// Recursive function to insert a new value
void insertRec(Node* node, int value) {
    if (value < node->data) {//if value is smaller then create node in left side
        if (node->left == NULL) {
            node->left = new Node(value);
        }else{
            insertRec(node->left, value);
        }
    }else{// if value is greater than root node then create node in right side
        if (node->right == NULL) {
            node->right = new Node(value);
        }else{
            insertRec(node->right, value);
        }
    }
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
BST bt;

// Insert nodes into the binary tree
bt.insert(10);
bt.insert(8);
bt.insert(21);
bt.insert(7);
bt.insert(27);
bt.insert(5);
bt.insert(4);
bt.insert(3);
// bt.insert()

// Perform tree traversals
bt.inorder();
// bt.preorder();
// bt.postorder();


return 0;
}
