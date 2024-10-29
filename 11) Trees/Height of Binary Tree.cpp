#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val){
        data = val;
        left = right = NULL;
    } 
};
int Height(Node* root){
    if(root == NULL)return 0;
    int lh = Height(root->left);
    int rh = Height(root->right);
    return 1 + max(lh,rh);
}

int main(){
    
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    cout<<Height(root);
}
