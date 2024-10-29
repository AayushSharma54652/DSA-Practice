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
Node* SearchInBst(Node* root,int val){
    while(root != NULL && root->data != val){
        root = val < root->data ? root->left:root->right;
    }
    return root;
}