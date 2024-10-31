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
Node* ReverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newHead = ReverseLinkedList(head->next);
    Node* front  = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,3,4,5};
    Node* head = ConvertArr(arr);
    head = ReverseLinkedList(head);
    print(head);
}