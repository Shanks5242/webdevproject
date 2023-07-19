#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        std::cout << "Memory error!\n";
        return nullptr;
    }
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        root = createNode(data);
        return root;
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    std::cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    
    root = insertNode(root, 10);
    root = insertNode(root, 6);
    root = insertNode(root, 15);
    root = insertNode(root, 3);
    root = insertNode(root, 8);
    root = insertNode(root, 12);
    root = insertNode(root, 18);

    std::cout << "Inorder traversal of BST (Before insertion): ";
    inorderTraversal(root);
    std::cout << std::endl;

    root = insertNode(root, 9);

    std::cout << "Inorder traversal of BST (After insertion): ";
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
