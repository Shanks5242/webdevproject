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
int heighttree(){

}

int main() {
    Node* root = nullptr;
    int n;
    int x;
    std :: cin>>n;
 for(int i=0;i<n;i++)
 {
    std::cin>>x;
root=insertNode(root , x);
 }
 heighttree();
 {

 }
}

   