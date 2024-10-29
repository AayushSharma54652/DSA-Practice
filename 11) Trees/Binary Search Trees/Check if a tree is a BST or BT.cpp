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



bool isValidBst(Node* root){
    return isValid(root,LONG_MIN,LONG_MAX);
}


bool isValid(Node* root,long Min_value,long Max_value){
    if(root == NULL)return true;
    if(root->data >= Max_value || root->data <= Min_value)return false;
    return isValid(root->left,Min_value,root->data)
    && isValid(root->right,root->data,Max_value);
}