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

int findMaxPathSum(Node* root,int &maxSum){
    if(root == NULL)return 0;
    int lh = max(0,findMaxPathSum(root->left,maxSum));
    int rh = max(0,findMaxPathSum(root->right,maxSum));
    int val = root->data;
    maxSum = max(maxSum,(lh+rh)+val);
    return max(lh,rh)+val;
}

int maxPathSum(Node* root){
    int maxSum = INT_MIN;
    findMaxPathSum(root,maxSum);
    return maxSum;
}

int main(){
    struct Node* root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right -> left = new Node(15);
    root->right->right = new Node(7);
    int ans = maxPathSum(root);
    cout<<"Maximum Path Sum for the given tree is "<<ans;
}