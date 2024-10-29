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

void inorder(Node* root, int k,int &counter,int &kth){
    if(root == NULL || counter >= k){
        return;
    }
    inorder(root->left,k,counter,kth);
    counter++;
    if(counter == k){
        kth = root->data;
        return;
    }
    inorder(root->right,k,counter,kth);
}

int kthSmallest(Node* root, int k)
{
    int kth = 0;
    int counter = 0;
    inorder(root,k,counter,kth);
    return kth;
}