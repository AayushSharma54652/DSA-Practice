#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1,Node* next1,Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};
Node* ConvertArr(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* SortLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* ZeroHead = new Node(-1);
    Node* OneHead = new Node(-1);
    Node* TwoHead = new Node(-1);
    Node* zero = ZeroHead;
    Node* one = OneHead;
    Node* two = TwoHead;
    Node* temp = head;
    while(temp){
        if(temp->data == 0){
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = one->next;
        }
        else{
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = (OneHead->next) ? (OneHead->next):(TwoHead->next);
    one->next = TwoHead->next;
    two->next = nullptr;
    Node* newHead = ZeroHead->next;
    delete ZeroHead;
    delete OneHead;
    delete TwoHead;
    return newHead;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    vector<int>arr{1,0,2,1,0,1,2,0,1};
    Node* head = ConvertArr(arr);
    head = SortLinkedList(head);
    print(head);
}