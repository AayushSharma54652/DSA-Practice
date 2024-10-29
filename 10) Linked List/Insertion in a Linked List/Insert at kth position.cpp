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
Node* InsertAtKth(Node* head,int val,int k){
    if(head == NULL){
        if(k==1){
            return new Node(val);
        }
        else{
            return head;
        }
    }
    if(k==1){
        Node* temp = new Node(val,head);
        return temp;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(val,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,2,5,3};
    Node* head = ConvertArr(arr);
    head = InsertAtKth(head,47,5);
    print(head);
}