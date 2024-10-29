#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
class BSTIterator{
    private: stack<Node*>myStack;
    public:
    BSTIterator(Node* root){
        pushAll(root);
    }
    bool hasNext(){
        return !myStack.empty();
    }
    int next(){
        Node* tmpNode = myStack.top();
        myStack.pop();
        pushAll(tmpNode->right);
        return tmpNode->data;
    }
    private:
    void pushAll(Node* node){
        for(;node != NULL;myStack.push(node),node = node->left);
    }
};