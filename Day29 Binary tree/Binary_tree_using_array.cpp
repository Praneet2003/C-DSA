#include <iostream>
using namespace std;

class BinaryTree {
private:
    int* arr;       // Array to store the tree elements
    int capacity;   // Maximum capacity of the tree
    int size;       // Current number of elements in the tree

public:
    BinaryTree(int cap) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    ~BinaryTree() {
        delete[] arr; // Free the allocated memory
    }

    void insert(int val) {
        if (size >= capacity) {
            cout << "Tree is full, cannot insert " << val << endl;
            return;
        }
        arr[size] = val;  // Insert the new value
        size++;           // Increment the size
    }

    void inorder() {
        cout << "Inorder Traversal: ";
        inorderRec(0); // Start from the root index
        cout << endl;
    }

    void inorderRec(int index) {
        if (index >= size) return; // Out of bounds

        // left -> root -> right
        inorderRec(2 * index + 1); // Traverse left child
        cout << arr[index] << " "; // Visit the root
        inorderRec(2 * index + 2); // Traverse right child
    }
};

int main() {
    BinaryTree b1(10); // Create a binary tree with capacity 10
    b1.insert(1);
    b1.insert(2);
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);
    b1.insert(6);
    // b1.insert(7);
    // b1.insert(8);
    // b1.insert(9);
    // b1.insert(10);

    b1.inorder(); // Print in-order traversal
    return 0;
}
