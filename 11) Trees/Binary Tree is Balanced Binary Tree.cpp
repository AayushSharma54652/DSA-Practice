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

int heightofTree(Node* root){
    if(root == NULL)return 0;
    int lh = heightofTree(root->left);
    if(lh == -1)return -1;
    int rh = heightofTree(root->right);
    if(rh == -1)return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}

bool IsBalancedTree(Node* root){
    return heightofTree(root) != -1;
}
int main(){
    
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    cout<<IsBalancedTree(root);
}