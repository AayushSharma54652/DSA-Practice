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
Node* PreOrdertree(vector<int>preorder){
    int i = 0;
    return Build(preorder,i,INT_MAX);
}
Node* Build(vector<int> &preorder,int &i,int bound){
    if(i == preorder.size() || preorder[i] > bound)return NULL;
    Node* root = new Node(preorder[i++]);
    root->left = Build(preorder,i,root->data);
    root->right = Build(preorder,i,bound);
    return root;
}