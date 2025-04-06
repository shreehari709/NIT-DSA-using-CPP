#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};


class BST {
public:
    Node* root;

    BST() { root = nullptr; }

    
    Node* insert(Node* root, int val) {
        if (root == nullptr) return new Node(val);
        if (val < root->data)
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);
        return root;
    }

    
    void insert(int val) {
        root = insert(root, val);
    }

    
    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    
    void inorder() {
        inorder(root);
        cout << endl;
    }

    
    bool search(Node* root, int val) {
        if (root == nullptr) return false;
        if (root->data == val) return true;
        return val < root->data ? search(root->left, val) : search(root->right, val);
    }

    
    bool search(int val) {
        return search(root, val);
    }

    
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr)
            current = current->left;
        return current;
    }

    
    Node* deleteNode(Node* root, int val) {
        if (root == nullptr) return root;

        if (val < root->data)
            root->left = deleteNode(root->left, val);
        else if (val > root->data)
            root->right = deleteNode(root->right, val);
        else {
            
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    
    void deleteNode(int val) {
        root = deleteNode(root, val);
    }
};

int main() {
    BST tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal: ";
    tree.inorder();

    cout << "Search 40: " << (tree.search(40) ? "Found" : "Not Found") << endl;

    tree.deleteNode(40);
    cout << "After deleting 40, inorder traversal: ";
    tree.inorder();

    return 0;
}
