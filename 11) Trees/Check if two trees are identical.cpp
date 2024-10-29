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

bool isIdentical(Node* root1,Node* root2){
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    else if(root1 == NULL && root2 == NULL){
        return true;
    }
    return(root1->data == root2->data)
    && isIdentical(root1->left,root2->left)
    && isIdentical(root1->right,root2->right);
}


int main() {

  struct Node * root1 = new Node(1);
  root1 -> left = new Node(2);
  root1 -> right = new Node(3);
  root1 -> right -> left = new Node(4);
  root1 -> right -> right = new Node(5);

  struct Node * root2 = new Node(1);
  root2 -> left = new Node(2);
  root2 -> right = new Node(3);
  root2 -> right -> left = new Node(4);

  if (isIdentical(root1, root2))
    cout << "Two Trees are identical";
  else cout << "Two trees are non-identical";

  return 0;
}