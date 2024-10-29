#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> n ={1,4};
    cout << n.first<<" " << n.second;
    cout<<endl;
    pair<int,pair<int,int>> p={1, {3 , 4}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
    cout<<endl;
    pair<int ,int> arr[]={ {1,2}, {2,5}, {3,4}};
    cout<<arr[2].first;
}