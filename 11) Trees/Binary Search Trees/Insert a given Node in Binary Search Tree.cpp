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
Node* InsertNode(Node* root,int val){
    if(root == NULL)return new Node(val);
    Node* cur = root;
    while(true){
        if(cur->data <= val){
            if(cur->right != NULL)cur = cur->right;
            else{
                cur->right = new Node(val);
                break;
            }
        }
        else{
            if(cur->left != NULL)cur=cur->left;
            else{
                cur->left = new Node(val);
                break;
            }
        }
    }
    return root;
}