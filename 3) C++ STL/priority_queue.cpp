//The element with the largest priority will be on top
#include<bits/stdc++.h>
using namespace std;
int main(){
    //max heap
    priority_queue<int>pq;
    pq.push(5);
    pq.push(6);
    pq.push(7);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    //min heap
    priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(2);
    pq2.push(3);
    pq2.push(4);
    pq2.push(5);
    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top()<<endl;
}