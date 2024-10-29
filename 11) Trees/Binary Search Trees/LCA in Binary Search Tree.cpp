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
Node* LowestCommonAncestor(Node* root,Node* p,Node* q){
    if(root == NULL)return NULL;
    int cur = root->data;
    if(cur < p->data && cur < q->data){
        return LowestCommonAncestor(root->right,p,q);
    }
    if(cur > p->data && cur > q->data){
        return LowestCommonAncestor(root->left,p,q);
    }
    return root;
}