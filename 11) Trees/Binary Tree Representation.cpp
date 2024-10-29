#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};
int main(){
    struct Node*root = new Node(2);
    struct Node*left = new Node(3);
    struct Node*right = new Node(4);
    root->left->right = new Node(5);
    return 0;
}