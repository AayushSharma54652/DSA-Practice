#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(4);
    dq.push_front(5);
    dq.emplace_back(6);
    dq.emplace_front(7);
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    //2
    dq.pop_back();
    
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    //3
    dq.pop_front();
    
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    //4
    dq.front();
    
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
}