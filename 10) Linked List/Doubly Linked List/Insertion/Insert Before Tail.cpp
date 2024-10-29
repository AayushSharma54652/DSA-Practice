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
Node* ConvertArr(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* InsertBeforeTail(Node* head,int val){
    if(head -> next == NULL){
        Node* newNode = new Node(val,head,nullptr);
        head->prev = newNode;
        return newNode;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->prev;
    Node*newNode = new Node(val,tail,prev);
    prev->next = newNode;
    tail->prev = newNode;
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,2,3,5};
    Node* head = ConvertArr(arr);
    head = InsertBeforeTail(head,9);
    print(head);
}