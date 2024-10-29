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
Node* ConvertArr(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node*mover = head;
    for(int i=1;i<arr.size();i++){
        Node*temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head; 
}
Node* DeleteK(Node* head,int k){
    if(head == NULL)return head;
    if(k == 1){
        Node*temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev -> next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head ->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,4,2,5};
    Node*head = ConvertArr(arr);
    head = DeleteK(head,2);
    print(head);
}