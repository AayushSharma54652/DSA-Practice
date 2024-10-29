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
Node* ConvertArr(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* FindIntersecion(Node* head1,Node* head2){
    if(head1 == NULL || head2 == NULL){
        return NULL;
    }
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
        if(temp1 == temp2)return temp1;
        if(temp1 == NULL)temp1 = head2;
        if(temp2 == NULL)temp2 = head1;
    }
    return temp1;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int>arr1{3,1,4,6,2};
    vector<int>arr2{1,2,3,4,5,4,6,2};
    Node* head1 = ConvertArr(arr1);
    Node* head2 = ConvertArr(arr2);
    Node* result = FindIntersecion(head1,head2);
    print(result);
}