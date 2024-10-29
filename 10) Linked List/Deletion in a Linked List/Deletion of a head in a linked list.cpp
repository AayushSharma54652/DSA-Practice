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
        mover ->next = temp;
        mover = temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    if(head == NULL)return NULL;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    vector<int>arr{1,4,5,3};
    Node* head = ConvertArr(arr);
    head = deleteHead(head);
    Node* temp = head;
    print(head);
}