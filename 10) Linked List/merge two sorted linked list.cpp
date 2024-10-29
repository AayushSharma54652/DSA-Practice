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
Node* MergeLL(Node* head1,Node* head2){
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    Node* t1 = head1;
    Node* t2 = head2;
    while(t1 != NULL && t2 != NULL){
        if(t1->data < t2->data){
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else{
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if(t1)temp->next = t1;
    else temp->next = t2;
    return dummyNode->next;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr1{2,4,8,10};
    vector<int>arr2{1,3,3,6,11,14};
    Node* head1 = ConvertArr(arr1);
    Node* head2 = ConvertArr(arr2);
    Node* ans = MergeLL(head1,head2);
    print(ans);
}