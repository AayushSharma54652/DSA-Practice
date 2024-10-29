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
Node* buildTree(vector<int> &inorder,vector<int> &postorder){
    if(inorder.size() != postorder.size()){
        return NULL;
    }
    map<int,int>inMap;
    for(int i=0;i<inorder.size();i++){
        inMap[inorder[i]] = i;
    }
    return MakeTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inMap);
}
Node* MakeTree(vector<int> &inorder,int instart,int inend,vector<int> &postorder,int poststart,int postend,map<int,int> &inMap){
    if(instart > inend || poststart>postend)return NULL;
    Node* root = new Node(postorder[postend]);
    int inroot = inMap[root->data];
    int numsleft = inroot - instart;
    root->left = MakeTree(inorder,instart,inroot-1,postorder,poststart,poststart+numsleft-1,inMap);
    root->right = MakeTree(inorder,inroot+1,inend,postorder,poststart+numsleft,postend-1,inMap);
    return root;
}