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
vector<vector<int>>ZigZag(Node* root){
    vector<vector<int>>result;
    if(root == NULL)return result;
    queue<Node*>nodeQueue;
    bool lefttoRight = true;
    while(!nodeQueue.empty()){
        int size = nodeQueue.size();
        vector<int>row(size);
        for(int i=0;i<size;i++){
            Node* node = nodeQueue.front();
            nodeQueue.pop();
            int index = (lefttoRight) ? i:(size-1-i);
            row[index] = node->data;
            if(node->left){
                nodeQueue.push(node->left);
            }
            if(node->right){
                nodeQueue.push(node->right);
            }
        }
        lefttoRight = !lefttoRight;
        result.push_back(row);
    }
    return result;
}