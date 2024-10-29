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
Node* Lca(Node* root,Node* p,Node* q){
    if(root == NULL || root == p || root == q){
        return root;
    }
    Node* left = Lca(root->left,p,q);
    Node* right = Lca(root->right,p,q);
    if(left == NULL){
        return right;
    }
    else if(right == NULL){
        return left;
    }
    else{
        return root;
    }
}