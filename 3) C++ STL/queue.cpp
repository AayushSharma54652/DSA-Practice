//Works in FIFO Manner

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(5);//{5}
    q.push(4);//{5,4}
    q.emplace(3);//{5,4,3}
    q.back()+=5;//3+5 = 8 {5,4,8}
    cout<<q.back()<<endl;//{8}
    cout<<q.front()<<endl;//{5}
    q.pop();//{4,8}
    cout<<q.front()<<endl;//{4}
}