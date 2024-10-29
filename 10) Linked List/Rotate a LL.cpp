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
Node* findLastNode(Node* temp,int k){
    int cnt = 1;
    while(temp != NULL){
        if(cnt == k)return temp;
        cnt++;
        temp = temp->next;
    }
    return temp;
}
Node* RotateLL(Node* head,int k){
    if(head == NULL || k == 0)return head;
    int len = 1;
    Node* tail = head;
    while(tail->next != NULL){
        len++;
        tail = tail->next;
    }
    if(k % len == 0)return head;
    k = k % len;
    tail->next = head;
    Node* newLastNode = findLastNode(head,len-k);
    head = newLastNode->next;
    newLastNode->next = NULL;
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,2,3,4,5};
    int k = 2;
    Node* head = ConvertArr(arr);
    head = RotateLL(head,k);
    print(head);
}