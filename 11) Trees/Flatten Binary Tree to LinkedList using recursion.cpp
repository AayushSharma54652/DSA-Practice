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
void flatten(Node* root){
    if(root == NULL)return;
    Node* prev = NULL;
    flatten(root->right);
    flatten(root->left);
    root->left = NULL;
    root->right = prev;
    prev = root;
}