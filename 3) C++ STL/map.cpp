//stores element in the form of key and value ,where key is 
//unique and stored in sorted manner
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mpp;
    mpp.insert({1,2});
    mpp.insert({2,4});
    mpp.insert({3,1});
    //printing elements of map
    for (auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //accessing element by key value
    cout<<mpp[3];
    //lower and upper bound
    auto it1 = mpp.lower_bound(2);
    auto it2 = mpp.upper_bound(3);

}