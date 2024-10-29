#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* ConvertArr(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}
int searchElement(Node* head,int x){
    Node* temp = head;
    while(temp){
        if(temp -> data == x)return 1;
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int>arr{1,2,4,1,3};
    Node* head = ConvertArr(arr);
    cout<<searchElement(head,7);
}