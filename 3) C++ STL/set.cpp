//sorted and unique elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    //deleting multiple elements
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    
    s.erase(it1,it2);
    for(auto it:s){
        cout<<it<<endl;
    }
}