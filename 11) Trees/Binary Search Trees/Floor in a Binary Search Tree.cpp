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
int FloorBst(Node* root,int key){
    int floor = -1;
    while(root != NULL){
        if(root->data == key){
            floor = root->data;
            return floor;
        }
        if(root->data < key){
            floor = root->data;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return floor;
}