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
Node* ReverseLL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newHead = ReverseLL(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}
bool CheckPalindrome(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast->next != NULL || fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    Node* newHead = ReverseLL(slow->next);
    Node* first = head;
    Node* second = newHead;
    while(second != NULL){
        if(first->data != second->data){
            return false;
        }
        first = first->next;
        second = second->next;
    }
    ReverseLL(newHead);
    return true;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr{1,2,3,2,1};
    Node* head = ConvertArr(arr);
    cout<<CheckPalindrome(head);
}