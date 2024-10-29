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
void reorder(Node* root){
    if(root == NULL)return;
    int child = 0;
    if(root->left){
        child += root->left->data;
    }
    if(root->right){
        child += root->right->data;
    }
    if(child < root->data){
        if(root->left)root->left->data = root->data;
        else if(root->right)root->right->data = root->data;
    }
    reorder(root->left);
    reorder(root->right);
    int tot = 0;
    if(root->left)tot+= root->left->data;
    if(root->right)tot+= root->right->data;
    if(root->left or root->right)root->data = tot;
}
