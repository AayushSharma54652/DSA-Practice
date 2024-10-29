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

int height(Node* root,int &diameter){
    if(root == NULL)return 0;
    int lh = height(root->left,diameter);
    int rh = height(root->right,diameter);
    diameter = max(diameter,lh+rh);
    return 1+max(lh,rh);
}
int diameterOfBinaryTree(Node* root){
    int diameter = 0;
    height(root,diameter);
    return diameter;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    cout<<diameterOfBinaryTree(root);
}