#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void preOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    struct Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->right = new Node(5);
    preOrder(root);

    return 0;
}
