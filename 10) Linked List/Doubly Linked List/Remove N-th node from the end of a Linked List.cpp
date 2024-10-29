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
Node* RemoveNthNode(Node* head,int k){
    Node* fast = head;
    Node* slow = head;
    for(int i=0;i<k;i++){
        fast = fast->next;
    }
    if(fast == NULL){
        return head->next;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    vector<int>arr{1,2,3,4,5};
    int k = 3;
    Node* head = ConvertArr(arr);
    head = RemoveNthNode(head,k);
    print(head);
}