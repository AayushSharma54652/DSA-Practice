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
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int helper(Node* temp){
    if(temp == NULL){
        return 1;
    }
    int carry = helper(temp->next);
    temp->data = temp->data+carry;
    if(temp->data < 10)return 0;
    temp->data = 0;
    return 1;
}
Node* Add1(Node* head){
    int carry = helper(head);
    if(carry == 1){
        Node* newHead = new Node(1);
        newHead->next = head;
        return newHead;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{9,9,9,9};
    Node* head = ConvertArr(arr);
    head = Add1(head);
    print(head);
}