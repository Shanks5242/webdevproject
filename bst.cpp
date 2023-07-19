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


Node* createBST(int arr[], int size) {
    Node* root = nullptr;
    for (int i = 0; i < size; i++) {
        root = insertNode(root, arr[i]);
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
    int n;
    std:: cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }

    Node* root = createBST(a, n);

    std::cout << "Inorder traversal of BST: ";
    inorderTraversal(root);

    return 0;
}
