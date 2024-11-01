#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* DeleteNode(Node* root,int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return helper(root);
    }
    Node* dummy = root;
    while(root != NULL){
        if(root->data > key){
            if(root->left != NULL && root->left->data == key){
                root->left = helper(root->left);
                break;
            }
            else{
                root = root->left;
            }
        }
        else{
            if(root-> right != NULL && root->right->data == key){
                root->right = helper(root->right);
                break;
            }
            else{
                root = root->right;
            }
        }
    }
    return dummy;
}

Node* helper(Node* root){
    if(root->left == NULL){
        return root->right;
    }
    else if(root->right == NULL){
        return root->left;
    }
    Node* rightChild = root->right;
    Node* lastRight = findLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
}
Node* findLastRight(Node* root){
    if(root->right == NULL){
        return root;
    }
    return findLastRight(root->right);
}