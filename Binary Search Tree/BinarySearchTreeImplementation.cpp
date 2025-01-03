#include <iostream>

struct Node {
    int key;
    Node* left;
    Node* right;
    
    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    Node* insert(Node* node, int key) {
        if (!node) return new Node(key);
        if (key < node->key) node->left = insert(node->left, key);
        else if (key > node->key) node->right = insert(node->right, key);
        return node;
    }

    Node* search(Node* node, int key) {
        if (!node || node->key == key) return node;
        if (key < node->key) return search(node->left, key);
        return search(node->right, key);
    }

    Node* findMin(Node* node) {
        while (node && node->left) node = node->left;
        return node;
    }

    Node* remove(Node* node, int key) {
        if (!node) return node;
        if (key < node->key) node->left = remove(node->left, key);
        else if (key > node->key) node->right = remove(node->right, key);
        else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = findMin(node->right);
            node->key = temp->key;
            node->right = remove(node->right, temp->key);
        }
        return node;
    }

    void inorder(Node* node) {
        if (node) {
            inorder(node->left);
            std::cout << node->key << " ";
            inorder(node->right);
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int key) {
        root = insert(root, key);
    }

    bool search(int key) {
        return search(root, key) != nullptr;
    }

    void remove(int key) {
        root = remove(root, key);
    }

    void inorder() {
        inorder(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder traversal: ";
    bst.inorder();

    std::cout << "Delete 20\n";
    bst.remove(20);
    std::cout << "Inorder traversal: ";
    bst.inorder();

    std::cout << "Delete 30\n";
    bst.remove(30);
    std::cout << "Inorder traversal: ";
    bst.inorder();

    std::cout << "Delete 50\n";
    bst.remove(50);
    std::cout << "Inorder traversal: ";
    bst.inorder();

    return 0;
}
