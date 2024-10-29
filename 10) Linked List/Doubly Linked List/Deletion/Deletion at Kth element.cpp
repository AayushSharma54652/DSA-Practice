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
Node* DeleteAtK(Node* head,int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp-> next != NULL){
        cnt++;
        if(cnt == k)break;
        temp = temp->next;
    }
    Node* prev = temp->prev;
    Node* front = temp->next;
    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == NULL){
        Node* prev = head;
        head = head->next;
        head->prev = nullptr;
        prev->next = nullptr;
        delete prev;
        return head;
    }
    else if(front == NULL){
        Node* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }
        Node* prev = tail->prev;
        prev->next = nullptr;
        tail->prev = nullptr;
        delete tail;
        return head;
    }
    prev->next = front;
    front->prev = prev;
    delete temp;
    return head;
}


void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    vector<int>arr{1,2,4,2,7};
    Node* head = ConvertArr(arr);
    head = DeleteAtK(head,5);
    print(head);
}
