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
int diameter(Node* root,int &maxi){
    if(root == NULL)return NULL;
    int lh = diameter(root->left,maxi);
    int rh = diameter(root->right,maxi);
    maxi =  max(maxi,lh+rh);
    return 1+max(lh,rh);
}
int dia(Node* root){
    int maxi = INT_MIN;
    maxi = diameter(root,maxi);
    return maxi;
}