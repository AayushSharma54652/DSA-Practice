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
Node* buildTree(vector<int>& preorder,vector<int>& inorder){
    map<int,int>inMap;
    for(int i=0;i<inorder.size();i++){
        inMap[inorder[i]] = i;
    }
    Node* root = MakeTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);
    return root;
}
Node* MakeTree(vector<int> &preorder,int prestart,int preEnd,vector<int> &inorder,int instart,int inend,map<int,int>inMap){
    if(prestart>preEnd || instart>inend)return NULL;
    Node* root = new Node(preorder[prestart]);
    int inRoot = inMap[root->data];
    int numsLeft = inRoot - instart;
    root->left = MakeTree(preorder,prestart+1,prestart+numsLeft,inorder,instart,inRoot-1,inMap);
    root->right = MakeTree(preorder,prestart+numsLeft+1,preEnd,inorder,inRoot+1,inend,inMap);
    return root;
}