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
vector<int>RightSideView(Node* root){
    vector<int>res;
    recurrsion(root,0,res);
    return res;
}
void recurrsion(Node* root,int level,vector<int> &res){
    if(root == NULL)return;
    if(res.size() == level)res.push_back(root->data);
    recurrsion(root->right,level+1,res);
    recurrsion(root->left,level+1,res);
}