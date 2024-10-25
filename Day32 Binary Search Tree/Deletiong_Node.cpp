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
    // Node* findmin(Node* node){
    //     while(node!=nullptr && node->left!=nullptr){
    //         node=node->left;
    //     }
    //     return node;
    // }
    // void Deletenode(int value){
    //     root = deleteNodeRec(root,value);
    // }

    // Node* deleteNodeRec(Node* node, int x){
    //     if(node==nullptr){
    //         return node;
    //     }
    //     if(x<node->data){
    //         node->left = deleteNodeRec(node->left,x);
    //         return node;
    //     }else if(node->data <x){
    //         node->right = deleteNodeRec(node->right, x);
    //         return node;
    //     }else{
    //         if(node->left == nullptr && node->right == nullptr){
    //             delete node;
    //             return nullptr;
    //         }if(node->left==nullptr){
    //             Node* temp = node->right;
    //             delete node;
    //             return temp;
    //         }else if(node->right == nullptr){
    //             Node* temp = node->left;
    //             delete node;
    //             return temp;
    //         }
    //         else{
    //             Node*temp = findmin(node->right);
    //             node->data = temp->data;
    //             node->right = deleteNodeRec(node->right,temp->data);
    //         }
    //     }
    // }
    Node* findmin(Node* node){
        while(node && node->left!=nullptr){
            node=node->left;
        }
        return node;
    }
    void Deletenode(int x){
        root= deletenodeRec(root,x);
    }
    Node* deletenodeRec(Node*node, int x){
        if(node==nullptr){
            return node;
        }
        if(node->data > x){
            node->left = deletenodeRec(node->left,x);
        }else if(node->data < x){
            node->right = deletenodeRec(node->right,x);
        }else{
            //0 child.
            if(node->left==nullptr && node->right== nullptr){
                delete node;
                return nullptr;
                //1 child.
            }else if(node->left== nullptr){
                Node* temp = node->right;
                delete node;
                return temp;
            }else if(node->right== nullptr){
                Node* temp = node->left;
                delete node;
                return temp;
            }else{
                // 2 child.
                Node* temp = findmin(node->right);
                node->data = temp ->data;
                node->right = deletenodeRec(node->right,temp->data);
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
    // cout << "Post-order Traversal: ";

void postorder(){
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
    // bst.inorder();
    bst.postorder();
    // bst.findmin();
    bst.Deletenode(51);
    cout<<"After deletion:";
    bst.postorder();
}