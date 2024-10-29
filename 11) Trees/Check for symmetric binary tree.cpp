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

bool isSymmetrichelp(Node* left,Node* right){
    if(left == NULL || right == NULL){
        return left==right;
    }
    if(left->data != right->data)return false;
    return isSymmetrichelp(left->left,right->right)
    &&
    isSymmetrichelp(left->right,right->left);
}
bool isSymmetric(Node* root){
    return root == NULL || isSymmetrichelp(root->left,root->right);
}
int main() {

  struct Node * root = new Node(1);
  root -> left = new Node(2);
  root -> left -> left = new Node(3);
  root -> left -> right = new Node(4);
  root -> right = new Node(2);
  root -> right -> left = new Node(4);
  root -> right -> right = new Node(3);

  bool res;
  res = isSymmetric(root);

  if (res)
    cout << "The tree is symmetrical";
  else cout << "The tree is NOT symmetrical";

  return 0;
}