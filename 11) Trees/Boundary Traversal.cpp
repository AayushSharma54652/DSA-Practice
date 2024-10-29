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
bool isLeaf(Node* root){
    return !root->left && !root->right;
}
void addLeftBoundary(Node* root,vector<int> &res){
    Node* cur = root->left;
    while(cur){
        if(!isLeaf(cur))res.push_back(cur->data);
        if(cur->left)cur = cur->left;
        else cur = cur->right;
    }
}
void addRightBoundary(Node* root,vector<int> &res){
    Node* cur = root->right;
    vector<int>tmp;
    while(cur){
        if(!isLeaf(cur))tmp.push_back(cur->data);
        if(cur->right)cur = cur->right;
        else cur = cur->left;
    }
    for(int i=tmp.size()-1;i>=0;i--){
        res.push_back(tmp[i]);
    }
}
void addLeaves(Node* root,vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left)addLeaves(root->left,res);
    if(root->right)addLeaves(root->right,res);
}
vector<int>printBoundary(Node* root){
    vector<int> res;
    if(!root)return res;
    if(!isLeaf(root))res.push_back(root->data);
    addLeftBoundary(root,res);
    addLeaves(root,res);
    addRightBoundary(root,res);
    return res;
}

int main() {

  struct Node* root = new Node(1);
  root -> left = new Node(2);
  root -> left -> left = new Node(3);
  root -> left -> left -> right = new Node(4);
  root -> left -> left -> right -> left = new Node(5);
  root -> left -> left -> right -> right = new Node(6);
  root -> right = new Node(7);
  root -> right -> right = new Node(8);
  root -> right -> right -> left = new Node(9);
  root -> right -> right -> left -> left = new Node(10);
  root -> right -> right -> left -> right = new Node(11);
  vector<int>Boundary = printBoundary(root);
  for(auto it:Boundary){
    cout<<it<<" ";
  }
  return 0;
}

