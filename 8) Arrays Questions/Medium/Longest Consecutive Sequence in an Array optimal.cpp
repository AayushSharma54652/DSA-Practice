#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int consecutive_sequence(vector<int> &arr,int n){
    if(n == 0) return 0;
    unordered_set<int> st;
    int longest = 1;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<consecutive_sequence(arr,n);
}