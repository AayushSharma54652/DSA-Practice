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
void flatten(Node* root){
    Node* cur = root;
    while(cur != NULL){
        if(cur->left != NULL){
            Node* pre = cur->left;
            while(pre->right){
                pre = pre->right;
            }
            pre->right = cur->left;
            cur->right = cur->left;
            cur->left = NULL;
        }
        cur = cur->right;
    } 
}