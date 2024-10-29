//Works on LIFO order - Last in First Out
// all operations are of complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(6);
    st.push(5);
    st.emplace(4);
    st.push(3);
    st.push(2);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty();
}