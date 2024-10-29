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

bool getPath(Node* root,vector<int> &ans,int x){
    if(!root){
        return false;
    }
    arr.push_back(root->data);
    if(root->data == x)return true;
    if(getPath(root->left,arr,x)||getPath(root->right,arr,x)){
        return true;
    }
    arr.pop_back();
    return false;
}
vector<int>path(Node* root){
    int x = 7;
    vector<int>ans;
    getPath(root,ans,x);
    return ans;
}
int main(){
  struct Node * root = new Node(1);
  root -> left = new Node(2);
  root -> left -> left = new Node(4);
  root -> left -> right = new Node(5);
  root -> left -> right -> left = new Node(6);
  root -> left -> right -> right = new Node(7);
  root -> right = new Node(3);
    vector<int>arr;
    arr = path(root);
    for(auto it:arr){
        cout<<it<<" ";
    }
}