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
Node* ConvertArr(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* OddEven(Node* head){
    if(head == NULL && head->next == NULL){
        return head;
    }
    Node* odd = head;
    Node* even = head->next;
    Node*evenHead = head->next;
    while(even != NULL && even->next != NULL){
        if(odd->next != nullptr){
            odd->next = odd->next->next;
            odd = odd->next;
        }
        if(even->next != nullptr){
            even->next = even->next->next;
            even = even->next;
        }
    }
    odd->next = evenHead;
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,2,3,4,5,6};
    Node* head = ConvertArr(arr);
    head = OddEven(head);
    print(head);
}