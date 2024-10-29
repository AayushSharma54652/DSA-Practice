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
Node* deleteAtValue(Node* head,int val){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            delete temp;
        }
        prev = temp;
        temp = temp->next;
    }
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
    head = deleteAtK(head,2);
    Node* temp = head;
    print(head);
}