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
Node* DeleteTail(Node* head){
    if(head == NULL || head->next == NULL)return NULL;
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;
    return head;
}
void print(Node* head){
    while(head){
        cout<<head ->data<<" ";
        head = head -> next;
    }
}
int main(){
    vector<int>arr{2,3,4,1};
    Node* head = ConvertArr(arr);
    head = DeleteTail(head);
    print(head);
}